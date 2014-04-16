//
//  CGFGameStateResponder.h
//  CocosGameFramework
//
//  Created by sunlin on 14-4-16.
//
//

#ifndef __CocosGameFramework__CGFGameStateResponder__
#define __CocosGameFramework__CGFGameStateResponder__

#include "cocos2d.h"

using namespace cocos2d;
class CGFGameStateResponder : public cocos2d::Ref
{
public:
    virtual bool init();
    
    void onGameInit(Ref* sender);

    void onGameGetReady(Ref* sender);
   
    void onGamePlaying(Ref* sender);
   
    void onGamePause(Ref* sender);
   
    void onGameOverWin(Ref* sender);
   
    void onGameOverLose(Ref* sender);
    
private:
    void registerGameStateChangeNotifications();
};
#endif /* defined(__CocosGameFramework__CGFGameStateResponder__) */
