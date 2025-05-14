#include "enemy1.h"
//#include "gamewidget.h"


enemyInsect::enemyInsect(Player *_player, int _HP, int _AttackPoint, qreal _Speed,int _exp)
    :EnemyBase(_player,_HP,_AttackPoint,_Speed,_exp)
{
    this->setPixmap(QPixmap(":/roles/img/roles/enemy1.png"));
    this->setScale(0.2);
    //expDropped = 33;
    mNo = 1;
}

void enemyInsect::setMirrorPixmap()
{
    EnemyBase::setMirrorPixmap();
}


