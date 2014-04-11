#include "TestLayer.h"

USING_NS_CC;

bool TestLayer::init()
{
    //TODO: changed
    if (!CGFLayer::init())
    {
        return false;
    }
    
	auto listener = EventListenerTouchOneByOne::create();
	listener->onTouchBegan = CC_CALLBACK_2(TestLayer::onTouchBegan, this);
	listener->onTouchMoved = CC_CALLBACK_2(TestLayer::onTouchMoved, this);
	listener->onTouchEnded = CC_CALLBACK_2(TestLayer::onTouchEnded, this);
    
	auto listener2 = EventListenerTouchAllAtOnce::create();
	listener2->onTouchesBegan = CC_CALLBACK_2(TestLayer::onTouchesBegan, this);
	listener2->onTouchesMoved = CC_CALLBACK_2(TestLayer::onTouchesMoved, this);
	listener2->onTouchesEnded = CC_CALLBACK_2(TestLayer::onTouchesEnded, this);
    
	//将监听委派到这个layer，并设置优先级
	auto dispatcher = Director::getInstance()->getEventDispatcher();
    //	dispatcher->addEventListenerWithSceneGraphPriority(listener2, this);
    //	dispatcher->setPriority(listener2, 1);
    
    dispatcher->addEventListenerWithSceneGraphPriority(listener, this);
	dispatcher->setPriority(listener, 1);
    
//    this->setTouchEnabled(true);
//    Size visibleSize = Director::getInstance()->getVisibleSize();
//    Point origin = Director::getInstance()->getVisibleOrigin();
//
//    /////////////////////////////
//    // 2. add a menu item with "X" image, which is clicked to quit the program
//    //    you may modify it.
//
//    // add a "close" icon to exit the progress. it's an autorelease object
//    auto closeItem = MenuItemImage::create(
//                                           "CloseNormal.png",
//                                           "CloseSelected.png",
//                                           CC_CALLBACK_1(TestLayer::menuCloseCallback, this));
//    
//	closeItem->setPosition(Point(origin.x + visibleSize.width - closeItem->getContentSize().width/2 ,
//                                origin.y + closeItem->getContentSize().height/2));
//
//    // create menu, it's an autorelease object
//    auto menu = Menu::create(closeItem, NULL);
//    menu->setPosition(Point::ZERO);
//    this->addChild(menu, 1);
//
//    /////////////////////////////
//    // 3. add your codes below...
//
//    // add a label shows "Hello World"
//    // create and initialize a label
//    
//    auto label = LabelTTF::create("Hello World", "Arial", 24);
//    
//    // position the label on the center of the screen
//    label->setPosition(Point(origin.x + visibleSize.width/2,
//                            origin.y + visibleSize.height - label->getContentSize().height));
//
//    // add the label as a child to this layer
//    this->addChild(label, 1);

//    // add "HelloWorld" splash screen"
//    auto sprite = Sprite::create("HelloWorld.png");
//
//    // position the sprite on the center of the screen
//    sprite->setPosition(Point(visibleSize.width/2 + origin.x, visibleSize.height/2 + origin.y));
//
//    // add the sprite as a child to this layer
//    this->addChild(sprite, 0);
    
    return true;
}

bool TestLayer::onTouchBegan(Touch *touch, Event *unused_event)
{
    CGFLayer::onTouchBegan(touch, unused_event);
    return true;
}

void TestLayer::menuCloseCallback(Ref* pSender)
{
#if (CC_TARGET_PLATFORM == CC_PLATFORM_WP8) || (CC_TARGET_PLATFORM == CC_PLATFORM_WINRT)
	MessageBox("You pressed the close button. Windows Store Apps do not implement a close button.","Alert");
    return;
#endif

    Director::getInstance()->end();

#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
    exit(0);
#endif
}


