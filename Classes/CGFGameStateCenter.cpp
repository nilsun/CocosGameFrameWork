//
//  CGFGameStateCenter.cpp
//  CocosGameFramework
//
//  Created by sunlin on 14-4-13.
//
//

#include "CGFGameStateCenter.h"
#include "CGFNotifications.h"
#include "cocos2d.h"

static CGFGameStateCenter *m_pGameStateCenter = nullptr;

CGFGameStateCenter* getInstance()
{
    if (!m_pGameStateCenter)
    {
        m_pGameStateCenter = new CGFGameStateCenter();
        m_pGameStateCenter->init();
    }
    return m_pGameStateCenter;
}

bool CGFGameStateCenter::init()
{
    m_gameSate = kGameStateInit;
    return true;
}

CGFGameStateCenter::~CGFGameStateCenter()
{
    delete m_pGameStateCenter;
}

CGFGameState CGFGameStateCenter::getGameState()
{
    return m_gameSate;
}

void CGFGameStateCenter::setGameState(CGFGameState gameState, bool bShouldNotify)
{
    m_gameSate = gameState;
    if (!bShouldNotify)
    {
        return;
    }
    
    std::string notification;
    switch (m_gameSate)
    {
        case kGameStateInit:
            notification = kNotificationGameInit;
            break;
        case kGameStateGetReady:
            notification = kNotificationGameGetReady;
            break;
        case kGameStatePlaying:
            notification = kNotificationGamePlaying;
            break;
        case kGameStatePause:
            notification = kNotificationGamePause;
            break;
        case kGameStateOverWin:
            notification = kNotificationGameOverWin;
            break;
        case kGameStateOverLose:
            notification = kNotificationGameOverLose;
            break;
        default:
            CCASSERT(false, "No such game state.");
            break;
    }
    cocos2d::__NotificationCenter::getInstance()->postNotification(notification);
}
