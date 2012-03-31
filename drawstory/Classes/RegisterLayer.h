//
//  RegisterLayer.h
//  drawstory
//
//  Created by 张 靖宇 on 12-3-30.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#ifndef drawstory_RegisterLayer_h
#define drawstory_RegisterLayer_h

#include "cocos2d.h"
#include "TextInputDelegate.h"
#include "LevelHelperLoader.h"

class RegisterLayer : public TextInputDelegate
{
public:
    LAYER_NODE_FUNC(RegisterLayer)
public:
    RegisterLayer();
    virtual ~RegisterLayer();
    
    virtual bool init();
    

protected:    
    virtual void onEnter();
    virtual void onTouchBegan(cocos2d::CCTouch* touch,cocos2d::CCEvent* event);
    virtual void onTouchMoved(cocos2d::CCTouch* touch,cocos2d::CCEvent* event);
    virtual void onTouchCancelled(cocos2d::CCTouch* touch,cocos2d::CCEvent* event);
    virtual void onTouchEnded(cocos2d::CCTouch* touch,cocos2d::CCEvent* event);   
    
    virtual cocos2d::CCRect getTextFieldRect(cocos2d::CCTextFieldTTF* textField) const;
    virtual int getMaximumCharacters(cocos2d::CCTextFieldTTF* textField) const;
protected:
    LHSprite* hitTestWithButton(const cocos2d::CCPoint& localPos);
protected:
    LevelHelperLoader* level_;
    LHSprite* trackingButton_;
};


#endif
