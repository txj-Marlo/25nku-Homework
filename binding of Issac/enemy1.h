#ifndef ENEMY1_H
#define ENEMY1_H

#include"enemybase.h"


class enemyInsect : public EnemyBase
{
public:
    enemyInsect(Player* _player, int _HP, int _AttackPoint, qreal _Speed, int _exp);

    void setMirrorPixmap();

private:
    //QPixmap pix(":/roles/img/roles/chimera1.png");

};

#endif // ENEMY1_H
