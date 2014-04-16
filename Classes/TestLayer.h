#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__

#include "cocos2d.h"
#include "CGFLayer.h"
#include "CGFMacros.h"
#include "CGFNotifications.h"

using namespace cocos2d;
class TestLayer : public CGFLayer
{
public:
    virtual bool init();
    
    void menuCloseCallback(cocos2d::Ref* pSender);
        
    virtual bool onTouchBegan(Touch *touch, Event *unused_event);
    
    virtual void onTouchesBegan(const std::vector<Touch*>& touches, Event *unused_event);
    
    CREATE_FUNC(TestLayer);
    
    CGF_TOUCH_ONE_BY_ONE_FUC(TestLayer);
    
//    CGF_TOUCH_ALL_AT_ONCE_FUC(TestLayer);
    
    CGF_GAME_STATE_OBSERVE_FUC(TestLayer);
};

#endif // __HELLOWORLD_SCENE_H__


