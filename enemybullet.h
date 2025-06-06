#ifndef ENEMYBULLET_H
#define ENEMYBULLET_H

#include"bullet.h"
#include"enemy4.h"
#include"enemy5.h"

class enemyBullet : public Bullet
{
public:
    enemyBullet(EnemyBase *_owner,BulletDir _dir,int _Attack, qreal _speed = 8,int _type = 0);

private:
    EnemyBase* mOwner;
    int type = 0;
};

#endif // ENEMYBULLET_H
