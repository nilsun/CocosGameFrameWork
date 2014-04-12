//
//  CGFMacros.h
//  CocosGameFramework
//
//  Created by sunlin on 14-4-12.
//
//

#ifndef CocosGameFramework_CGFMacros_h
#define CocosGameFramework_CGFMacros_h


#define CC_ENABLE_TOUCH_ONE_BY_ONE(klass) public:\
void setTouchEnabled() \
{ \
auto _touchListener = EventListenerTouchOneByOne::create(); \
_touchListener->onTouchBegan = CC_CALLBACK_2(klass::onTouchBegan, this); \
_touchListener->onTouchMoved = CC_CALLBACK_2(klass::onTouchMoved, this); \
_touchListener->onTouchEnded = CC_CALLBACK_2(klass::onTouchEnded, this); \
_touchListener->onTouchCancelled = CC_CALLBACK_2(klass::onTouchCancelled, this); \
_eventDispatcher->addEventListenerWithSceneGraphPriority(_touchListener, this); \
} \

#define CC_ENABLE_TOUCH_ALL_AT_ONCE(klass) public:\
void setTouchesEnabled() \
{ \
auto _touchListener = EventListenerTouchAllAtOnce::create(); \
_touchListener->onTouchesBegan = CC_CALLBACK_2(klass::onTouchesBegan, this); \
_touchListener->onTouchesMoved = CC_CALLBACK_2(klass::onTouchesMoved, this); \
_touchListener->onTouchesEnded = CC_CALLBACK_2(klass::onTouchesEnded, this); \
_touchListener->onTouchesCancelled = CC_CALLBACK_2(klass::onTouchesCancelled, this); \
_eventDispatcher->addEventListenerWithSceneGraphPriority(_touchListener, this); \
} \

#endif
