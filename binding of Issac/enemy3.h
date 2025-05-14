#ifndef ENEMY3_H
#define ENEMY3_H

#include"enemybase.h"


class enemyBig : public EnemyBase
{
public:
    enemyBig(Player* _player, int _HP, int _AttackPoint, qreal _Speed, int _exp);

    void setMirrorPixmap();

    void startSkill();

private:

};

#endif // ENEMY3_H
