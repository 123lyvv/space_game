//
//  CCParallaxNodeExtra.h
//  SpaceGame
//
//  Created by loaner on 2014-05-20.
//
//

#ifndef __SpaceGame__CCParallaxNodeExtra__
#define __SpaceGame__CCParallaxNodeExtra__

#include <iostream>

 /* defined(__SpaceGame__CCParallaxNodeExtra__) */

#include "cocos2d.h"

USING_NS_CC;

class CCParallaxNodeExtra : public CCParallaxNode{
public:
    //Need to provide a constructor
    CCParallaxNodeExtra();
    
    //just to avoid ugly later cast and also for safety
    static CCParallaxNodeExtra* node();
    
    // Facility method
    void incrementOffset(CCPoint offset, CCNode* node);
};

#endif