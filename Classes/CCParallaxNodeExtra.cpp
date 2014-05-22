//
//  CCParallaxNodeExtra.cpp
//  SpaceGame
//
//  Created by loaner on 2014-05-20.
//
//

#include "CCParallaxNodeExtra.h"

class CCPointObject : CCObject{
    CC_SYNTHESIZE(CCPoint, m_tRatio, Ratio);
    CC_SYNTHESIZE(CCPoint, m_tOffset, Offset);
    CC_SYNTHESIZE(CCNode*, m_pChild, Child);
};

// Need to provide a contructor
CCParallaxNodeExtra::CCParallaxNodeExtra(){
    CCParallaxNode();
}

CCParallaxNodeExtra* CCParallaxNodeExtra::node(){
    return new CCParallaxNodeExtra();
}

void CCParallaxNodeExtra::incrementOffset(CCPoint offset, CCNode* node){
    for (unsigned int i = 0; i < m_pParallaxArray->num; i++) {
        CCPointObject* point = (CCPointObject*)m_pParallaxArray->arr[i];
        CCNode* curNode = point->getChild();
        if (curNode->isEqual(node)) {
            point->setOffset(ccpAdd(point->getOffset(), offset));
            break;
        }
    }
}
