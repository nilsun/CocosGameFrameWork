//
//  CGFLayerDelegate.h
//  CocosGameFramework
//
//  Created by sunlin on 14-4-9.
//
//

#ifndef __CocosGameFramework__CGFLayerDelegate__
#define __CocosGameFramework__CGFLayerDelegate__

#include "cocos2d.h"
using namespace cocos2d;

class CGFLayer;
class CGFLayerDelegate
{
public:
    virtual bool onLayerTouchBegan(CGFLayer* pLayer, Touch *pTouch) = 0;
    virtual void onLayerTouchMoved(CGFLayer* pLayer, Touch *pTouch) = 0;
    virtual void onLayerTouchEnded(CGFLayer* pLayer, Touch *pTouch) = 0;
    virtual void onLayerTouchCancelled(CGFLayer* pLayer, Touch *pTouch) = 0;

    virtual void onLayerTouchesBegan(CGFLayer* pLayer, const std::vector<Touch*> touches) = 0;
    virtual void onLayerTouchesMoved(CGFLayer* pLayer, const std::vector<Touch*> touches) = 0;
    virtual void onLayerTouchesEnded(CGFLayer* pLayer, const std::vector<Touch*> touches) = 0;
    virtual void onLayerTouchesCancelled(CGFLayer* pLayer, const std::vector<Touch*> touches) = 0;
};
#endif /* defined(__CocosGameFramework__CGFLayerDelegate__) */
