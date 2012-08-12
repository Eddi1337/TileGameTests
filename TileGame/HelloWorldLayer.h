//
//  HelloWorldLayer.h
//  TileGame
//
//  Created by Ben Dixon on 11/08/2012.
//  Copyright Square Tree Studios 2012. All rights reserved.
//


#import <GameKit/GameKit.h>

// When you import this file, you import all the cocos2d classes
#import "cocos2d.h"

// HelloWorldLayer
@interface HelloWorldLayer : CCLayer <GKAchievementViewControllerDelegate, GKLeaderboardViewControllerDelegate>
{
    CCTMXTiledMap *_tileMap;
    CCTMXLayer *_background;
}

@property (nonatomic, retain) CCTMXTiledMap *tileMap;
@property (nonatomic, retain) CCTMXLayer *background;

// returns a CCScene that contains the HelloWorldLayer as the only child
+(CCScene *) scene;

@end
