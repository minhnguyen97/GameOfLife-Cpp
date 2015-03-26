#ifndef __MAIN_SCENE_H__
#define __MAIN_SCENE_H__

#include "cocos2d.h"
#include "ui/CocosGUI.h"
#include "Grid.h"

class MainScene : public cocos2d::Layer
{
public:
    // there's no 'id' in cpp, so we recommend returning the class instance pointer
    static cocos2d::Scene* createScene();

    // Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
    virtual bool init();

    // implement the "static create()" method manually
    CREATE_FUNC(MainScene);
    
private:
    Grid* grid;
    cocos2d::ui::Text* populationCount;
    cocos2d::ui::Text* generationCount;
    
    void play(Ref* pSender, cocos2d::ui::Widget::TouchEventType type);
    void pause(Ref* pSender, cocos2d::ui::Widget::TouchEventType type);
    void step(float dt);
};

#endif // __MAIN_SCENE_H__
