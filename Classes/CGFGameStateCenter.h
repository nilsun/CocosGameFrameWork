//
//  CGFGameStateCenter.h
//  CocosGameFramework
//
//  Created by sunlin on 14-4-13.
//
//

#ifndef __CocosGameFramework__CGFGameStateCenter__
#define __CocosGameFramework__CGFGameStateCenter__


typedef enum
{
    kGameStateInit,
    kGameStateGetReady,
    kGameStatePlaying,
    kGameStatePause,
    kGameStateOverWin,
    kGameStateOverLose
}CGFGameState;

/**
 @brief
 
 CGFGameStateCenter is a singleton which manages the game state, it can send notifications to others when the game state changes.
 
 @see CGF_GAME_STATE_OBSERVE_FUC in CGFMacros.h, it defines the implementations of observer interested in the notification.
*/

class CGFGameStateCenter
{
public:
    static CGFGameStateCenter* getInstance();

    bool init();
    
    CGFGameState getGameState();
    
    void setGameState(CGFGameState gameState, bool bShouldNotify);
    
private:

    CGFGameState m_gameSate;
    
    ~CGFGameStateCenter();
};

#endif /* defined(__CocosGameFramework__CGFGameStateCenter__) */
