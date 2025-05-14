#ifndef ENEMY2_H
#define ENEMY2_H

#include "enemybase.h"

class enemyChimera:public EnemyBase
{
public:
    enemyChimera(Player* _player, int _HP, int _AttackPoint, qreal _Speed, int _exp);

    void setMirrorPixmap();

    void startSkill();
    //   :/roles/img/roles/chimera2.png
};

#endif // ENEMY2_H
