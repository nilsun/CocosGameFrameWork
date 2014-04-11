//
//  CGFLayer.cpp
//  CocosGameFramework
//
//  Created by sunlin on 14-4-9.
//
//

#include "CGFLayer.h"
#include "CGFLayerDelegate.h"

bool CGFLayer::onTouchBegan(Touch *touch, Event *unused_event)
{
    return m_pLayerDelegate->onLayerTouchBegan(this, touch);
}

void CGFLayer::onTouchMoved(Touch *touch, Event *unused_event)
{
    m_pLayerDelegate->onLayerTouchMoved(this, touch);
}

void CGFLayer::onTouchEnded(Touch *touch, Event *unused_event)
{
    m_pLayerDelegate->onLayerTouchEnded(this, touch);
}

void CGFLayer::onTouchCancelled(Touch *touch, Event *unused_event)
{
    m_pLayerDelegate->onLayerTouchCancelled(this, touch);
}

void CGFLayer::onTouchesBegan(const std::vector<Touch*>& touches, Event *unused_event)
{
    m_pLayerDelegate->onLayerTouchesBegan(this, touches);
}

void CGFLayer::onTouchesMoved(const std::vector<Touch*>& touches, Event *unused_event)
{
    m_pLayerDelegate->onLayerTouchesMoved(this, touches);
}

void CGFLayer::onTouchesEnded(const std::vector<Touch*>& touches, Event *unused_event)
{
    m_pLayerDelegate->onLayerTouchesEnded(this, touches);
}

void CGFLayer::onTouchesCancelled(const std::vector<Touch*>&touches, Event *unused_event)
{
    m_pLayerDelegate->onLayerTouchesCancelled(this, touches);
}
