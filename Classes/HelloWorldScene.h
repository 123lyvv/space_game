#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__


#include "cocos2d.h"
#include "CCParallaxNodeExtra.h"
USING_NS_CC;

class HelloWorld : public cocos2d::CCLayer
{
private:
    CCSpriteBatchNode* _batchNode;
    CCSprite* _ship;
    
    CCParallaxNodeExtra* _backgroundNode;
    CCSprite* _spacedust1;
    CCSprite* _spacedust2;
    CCSprite* _planetsunrise;
    CCSprite* _galaxy;
    CCSprite* _spacialanomaly;
    CCSprite* _spacialanomaly2;
    float _shipPointPerSecY;
    
    CCArray* _asteroids;
    int _nextAsteroid;
    float _nextAsteroidSpawn;
    
    CCArray* _shipLasers;
    int _nextShipLaser;
    
    void update(float dt);
public:
    // Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
    virtual bool init();  

    // there's no 'id' in cpp, so we recommend returning the class instance pointer
    static cocos2d::CCScene* scene();
    
    // a selector callback
    void menuCloseCallback(CCObject* pSender);
    
    virtual void didAccelerate(CCAcceleration* pAccelerationValue);
    
    float randomValueBetween(float low, float high);
    void setInvisible(CCNode* node);
    float getTimeTick();
    
    virtual void ccTouchesBegin(CCSet* touches, CCEvent* event);
    
    // implement the "static node()" method manually
    CREATE_FUNC(HelloWorld);
};

#endif // __HELLOWORLD_SCENE_H__
