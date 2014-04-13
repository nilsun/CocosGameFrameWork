//
//  CGFScene.h
//  CocosGameFramework
//
//  Created by sunlin on 14-4-9.
//
//

#include "CGFScene.h"


void CGFScene::addSceneMainLayer(Layer* pLayer)
{
    this->addChild(pLayer);
    m_pMainLayer = pLayer;
}
