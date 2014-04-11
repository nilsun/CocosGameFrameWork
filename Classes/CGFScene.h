//
//  CGFScene.h
//  CocosGameFramework
//
//  Created by sunlin on 14-4-9.
//
//

#ifndef __CocosGameFramework__CGFScene__
#define __CocosGameFramework__CGFScene__

#include "cocos2d.h"
#include "CGFLayerDelegate.h"

class CGFLayerDelegate;
class CGFScene : public Scene, public CGFLayerDelegate
{
public:
    CREATE_FUNC(CGFScene);
    
    virtual bool onLayerTouchBegan(CGFLayer* pLayer, Touch *pTouch){ return true; };
    virtual void onLayerTouchMoved(CGFLayer* pLayer, Touch *pTouch){};
    virtual void onLayerTouchEnded(CGFLayer* pLayer, Touch *pTouch){};
    virtual void onLayerTouchCancelled(CGFLayer* pLayer, Touch *pTouch){};
    
    virtual void onLayerTouchesBegan(CGFLayer* pLayer, const std::vector<Touch*> touches){};
    virtual void onLayerTouchesMoved(CGFLayer* pLayer, const std::vector<Touch*> touches){};
    virtual void onLayerTouchesEnded(CGFLayer* pLayer, const std::vector<Touch*> touches){};
    virtual void onLayerTouchesCancelled(CGFLayer* pLayer, const std::vector<Touch*> touches){};
};

#endif