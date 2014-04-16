//
//  CGFMacros.h
//  CocosGameFramework
//
//  Created by sunlin on 14-4-12.
//
//

#ifndef CocosGameFramework_CGFMacros_h
#define CocosGameFramework_CGFMacros_h


#define CGF_TOUCH_ONE_BY_ONE_FUC(__TYPE__) public:\
void setTouchEnabled() \
{ \
auto _touchListener = EventListenerTouchOneByOne::create(); \
_touchListener->onTouchBegan = CC_CALLBACK_2(__TYPE__::onTouchBegan, this); \
_touchListener->onTouchMoved = CC_CALLBACK_2(__TYPE__::onTouchMoved, this); \
_touchListener->onTouchEnded = CC_CALLBACK_2(__TYPE__::onTouchEnded, this); \
_touchListener->onTouchCancelled = CC_CALLBACK_2(__TYPE__::onTouchCancelled, this); \
_eventDispatcher->addEventListenerWithSceneGraphPriority(_touchListener, this); \
} \

#define CGF_TOUCH_ALL_AT_ONCE_FUC(__TYPE__) public:\
void setTouchesEnabled() \
{ \
auto _touchListener = EventListenerTouchAllAtOnce::create(); \
_touchListener->onTouchesBegan = CC_CALLBACK_2(__TYPE__::onTouchesBegan, this); \
_touchListener->onTouchesMoved = CC_CALLBACK_2(__TYPE__::onTouchesMoved, this); \
_touchListener->onTouchesEnded = CC_CALLBACK_2(__TYPE__::onTouchesEnded, this); \
_touchListener->onTouchesCancelled = CC_CALLBACK_2(__TYPE__::onTouchesCancelled, this); \
_eventDispatcher->addEventListenerWithSceneGraphPriority(_touchListener, this); \
} \

#define CGF_GAME_STATE_OBSERVE_FUC(__TYPE__) public:\
void observeGameState() \
{ \
__NotificationCenter::getInstance()->addObserver(this, callfuncO_selector(__TYPE__::onGameInit), kNotificationGameInit, NULL); \
__NotificationCenter::getInstance()->addObserver(this, callfuncO_selector(__TYPE__::onGameGetReady), kNotificationGameGetReady, NULL); \
__NotificationCenter::getInstance()->addObserver(this, callfuncO_selector(__TYPE__::onGamePlaying), kNotificationGamePlaying, NULL); \
__NotificationCenter::getInstance()->addObserver(this, callfuncO_selector(__TYPE__::onGamePause), kNotificationGamePause, NULL); \
__NotificationCenter::getInstance()->addObserver(this, callfuncO_selector(__TYPE__::onGameOverWin), kNotificationGameOverWin, NULL); \
__NotificationCenter::getInstance()->addObserver(this, callfuncO_selector(__TYPE__::onGameOverLose), kNotificationGameOverLose, NULL); \
} \
private:\
void onGameInit(Ref* sender); \
void onGameGetReady(Ref* sender); \
void onGamePlaying(Ref* sender); \
void onGamePause(Ref* sender); \
void onGameOverWin(Ref* sender); \
void onGameOverLose(Ref* sender); \

#endif
