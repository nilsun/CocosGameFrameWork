#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__

#include "cocos2d.h"
#include "CGFLayer.h"
#include "CGFMacros.h"


using namespace cocos2d;
class TestLayer : public CGFLayer
{
public:
    virtual bool init();
    
    void menuCloseCallback(cocos2d::Ref* pSender);
        
    virtual bool onTouchBegan(Touch *touch, Event *unused_event);
    
    virtual void onTouchesBegan(const std::vector<Touch*>& touches, Event *unused_event);
    
    CREATE_FUNC(TestLayer);
    
    CC_ENABLE_TOUCH_ONE_BY_ONE(TestLayer);
    
    //CC_ENABLE_TOUCH_ALL_AT_ONCE(TestLayer);
};

#endif // __HELLOWORLD_SCENE_H__


