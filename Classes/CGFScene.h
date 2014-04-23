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

/** 
 @brief
 
 CGFScene is mainly designed to be the delegate of layer, the layer can communicate
 with its scene using delegate method.
 
 @note
 
 Call addSceneMainLayer to add layer if you want to get Layer in scene, so that you scene
 can also communicates with its layer.
*/

class CGFScene : public Scene, public CGFLayerDelegate
{
public:
    CREATE_FUNC(CGFScene);
    
    void addSceneMainLayer(Layer* pLayer);
    
    virtual bool onLayerTouchBegan(CGFLayer* pLayer, Touch *pTouch){ return true; };
    virtual void onLayerTouchMoved(CGFLayer* pLayer, Touch *pTouch){};
    virtual void onLayerTouchEnded(CGFLayer* pLayer, Touch *pTouch){};
    virtual void onLayerTouchCancelled(CGFLayer* pLayer, Touch *pTouch){};
    
    virtual void onLayerTouchesBegan(CGFLayer* pLayer, const std::vector<Touch*> touches){};
    virtual void onLayerTouchesMoved(CGFLayer* pLayer, const std::vector<Touch*> touches){};
    virtual void onLayerTouchesEnded(CGFLayer* pLayer, const std::vector<Touch*> touches){};
    virtual void onLayerTouchesCancelled(CGFLayer* pLayer, const std::vector<Touch*> touches){};

protected:
    Layer* m_pMainLayer;
};

#endif