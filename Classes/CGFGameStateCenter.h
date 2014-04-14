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
