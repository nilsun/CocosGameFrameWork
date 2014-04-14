//
//  CGFGameStateCenter.cpp
//  CocosGameFramework
//
//  Created by sunlin on 14-4-13.
//
//

#include "CGFGameStateCenter.h"

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
}
