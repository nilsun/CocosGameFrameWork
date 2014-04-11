//
//  TestScene.h
//  CocosGameFramework
//
//  Created by sunlin on 14-4-11.
//
//

#ifndef __CocosGameFramework__TestScene__
#define __CocosGameFramework__TestScene__

#include "cocos2d.h"
#include "CGFScene.h"

using namespace cocos2d;

class TestScene : public CGFScene
{
public:
    virtual bool onLayerTouchBegan(CGFLayer* pLayer, Touch *pTouch);
    
    CREATE_FUNC(TestScene);
};


#endif /* defined(__CocosGameFramework__TestScene__) */
