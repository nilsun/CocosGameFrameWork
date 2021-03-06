//
//  CGFLayer.h
//  CocosGameFramework
//
//  Created by sunlin on 14-4-9.
//
//

#include "cocos2d.h"

#ifndef __CocosGameFramework__CGFLayer__
#define __CocosGameFramework__CGFLayer__

using namespace cocos2d;
class CGFLayerDelegate;

/**
 @brief
 
 CGFLayer is designed to communicate with its delegate: CGFScene. Now the communications
 only include touch event dispatching.
 
 @note
  
 You should call setCGFLayerDelegate to set a CGFScene delegate to your layer.
*/

class CGFLayer : public Layer
{
public:
    CGFLayerDelegate* m_pLayerDelegate;
    
    CREATE_FUNC(CGFLayer);

    void setCGFLayerDelegate(CGFLayerDelegate* pLayerDelegate){ m_pLayerDelegate = pLayerDelegate; }
    
    virtual bool onTouchBegan(Touch *touch, Event *unused_event);
    virtual void onTouchMoved(Touch *touch, Event *unused_event);
    virtual void onTouchEnded(Touch *touch, Event *unused_event);
    virtual void onTouchCancelled(Touch *touch, Event *unused_event);
    
    virtual void onTouchesBegan(const std::vector<Touch*>& touches, Event *unused_event);
    virtual void onTouchesMoved(const std::vector<Touch*>& touches, Event *unused_event);
    virtual void onTouchesEnded(const std::vector<Touch*>& touches, Event *unused_event);
    virtual void onTouchesCancelled(const std::vector<Touch*>&touches, Event *unused_event);
};

#endif /* defined(__CocosGameFramework__CGFLayer__) */
