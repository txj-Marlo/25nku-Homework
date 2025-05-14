#ifndef ENEMY5_H
#define ENEMY5_H

#include"enemybase.h"

class enemyBoss : public EnemyBase
{
public:
    enemyBoss(Player* _player, int _HP, int _AttackPoint, qreal _Speed, int _exp);

    void getHurt(int _attack);
    void enemyMove(bool dir = 0);

    void setMirrorPixmap();

    void startSkill();

private:
    int skillCnt = 0;
};

#endif // ENEMY5_H
