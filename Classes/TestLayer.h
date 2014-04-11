#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__

#include "cocos2d.h"
#include "CGFLayer.h"

using namespace cocos2d;

class TestLayer : public CGFLayer
{
public:
    virtual bool init();
    
    void menuCloseCallback(cocos2d::Ref* pSender);
        
    virtual bool onTouchBegan(Touch *touch, Event *unused_event);
    
    CREATE_FUNC(TestLayer);
};

#endif // __HELLOWORLD_SCENE_H__
