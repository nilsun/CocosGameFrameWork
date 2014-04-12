//
//  TestScene.cpp
//  CocosGameFramework
//
//  Created by sunlin on 14-4-11.
//
//

#include "TestScene.h"

bool TestScene::onLayerTouchBegan(CGFLayer* pLayer, Touch *pTouch)
{
    CCLOG("TestScene::onLayerTouchBegan invoked");
    return true;
}

void TestScene::onLayerTouchesBegan(CGFLayer* pLayer, const std::vector<Touch*> touches)
{
    CCLOG("TestScene::onLayerTouchesBegan invoked");
}
