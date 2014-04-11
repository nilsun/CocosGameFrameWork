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
    CCLOG("TestScene received TouchBegan event");
    return true;
}
