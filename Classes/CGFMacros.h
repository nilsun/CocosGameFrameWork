//
//  CGFMacros.h
//  CocosGameFramework
//
//  Created by sunlin on 14-4-12.
//
//

#ifndef CocosGameFramework_CGFMacros_h
#define CocosGameFramework_CGFMacros_h


#define CC_ENABLE_TOUCH_ONE_BY_ONE(__TYPE__) public:\
void setTouchEnabled() \
{ \
auto _touchListener = EventListenerTouchOneByOne::create(); \
_touchListener->onTouchBegan = CC_CALLBACK_2(__TYPE__::onTouchBegan, this); \
_touchListener->onTouchMoved = CC_CALLBACK_2(__TYPE__::onTouchMoved, this); \
_touchListener->onTouchEnded = CC_CALLBACK_2(__TYPE__::onTouchEnded, this); \
_touchListener->onTouchCancelled = CC_CALLBACK_2(__TYPE__::onTouchCancelled, this); \
_eventDispatcher->addEventListenerWithSceneGraphPriority(_touchListener, this); \
} \

#define CC_ENABLE_TOUCH_ALL_AT_ONCE(__TYPE__) public:\
void setTouchesEnabled() \
{ \
auto _touchListener = EventListenerTouchAllAtOnce::create(); \
_touchListener->onTouchesBegan = CC_CALLBACK_2(__TYPE__::onTouchesBegan, this); \
_touchListener->onTouchesMoved = CC_CALLBACK_2(__TYPE__::onTouchesMoved, this); \
_touchListener->onTouchesEnded = CC_CALLBACK_2(__TYPE__::onTouchesEnded, this); \
_touchListener->onTouchesCancelled = CC_CALLBACK_2(__TYPE__::onTouchesCancelled, this); \
_eventDispatcher->addEventListenerWithSceneGraphPriority(_touchListener, this); \
} \

#endif
