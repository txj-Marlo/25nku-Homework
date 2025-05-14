#ifndef DEFINE_H
#define DEFINE_H

#include<QGraphicsItem>
#include<QGraphicsScene>
#include<QGraphicsView>
#include<QDebug>
#include<QTimer>
#include<QList>
#include<QToolButton>

class GameDefine
{
    GameDefine();
public:

    static const int GameViewUpdateTime = 10;
    static const int TotalItemNum = 24;//物品总数
    static const int InvincibleTime = 500;//无敌时间
    static const int GameTime = 120;//游戏总时间
    static const int OriginalAttackInterval = 800;//初始射击间隔
    static const int LimitedAttackInterval = 800;//最低射击间隔

};

#endif // DEFINE_H
