//
//  CGFGameStateResponder.cpp
//  CocosGameFramework
//
//  Created by sunlin on 14-4-16.
//
//

#include "CGFGameStateResponder.h"
#include "CGFNotifications.h"

bool CGFGameStateResponder::init()
{
    this->registerGameStateChangeNotifications();
    return true;
}

void CGFGameStateResponder::registerGameStateChangeNotifications()
{
    __NotificationCenter::getInstance()->addObserver(this, callfuncO_selector(CGFGameStateResponder::onGameInit), kNotificationGameInit, NULL);
    __NotificationCenter::getInstance()->addObserver(this, callfuncO_selector(CGFGameStateResponder::onGameGetReady), kNotificationGameGetReady, NULL);
    __NotificationCenter::getInstance()->addObserver(this, callfuncO_selector(CGFGameStateResponder::onGamePlaying), kNotificationGamePlaying, NULL);
    __NotificationCenter::getInstance()->addObserver(this, callfuncO_selector(CGFGameStateResponder::onGamePause), kNotificationGamePause, NULL);
    __NotificationCenter::getInstance()->addObserver(this, callfuncO_selector(CGFGameStateResponder::onGameOverWin), kNotificationGameOverWin, NULL);
    __NotificationCenter::getInstance()->addObserver(this, callfuncO_selector(CGFGameStateResponder::onGameOverLose), kNotificationGameOverLose, NULL);
}

void CGFGameStateResponder::onGameInit(Ref* sender)
{
}
void CGFGameStateResponder::onGameGetReady(Ref* sender)
{
}
void CGFGameStateResponder::onGamePlaying(Ref* sender)
{
}
void CGFGameStateResponder::onGamePause(Ref* sender)
{
}
void CGFGameStateResponder::onGameOverWin(Ref* sender)
{
}
void CGFGameStateResponder::onGameOverLose(Ref* sender)
{
}

