#ifndef ENEMYBASE_H
#define ENEMYBASE_H

#include "object.h"
#include "player.h"
#include<QTimer>
#include<QRandomGenerator>

class EnemyBase : public GameObject
{
    Q_OBJECT
public:
    explicit EnemyBase(GameObject *parent = nullptr);
    virtual ~EnemyBase();
    EnemyBase(Player* _player, int _HP, int _AttackPoint, qreal _Speed, int _exp);


    void setDir(bool right){mMoveDir = right;}
    virtual void setMirrorPixmap();



    virtual void getHurt(int _attack);
    virtual void enemyMove(bool dir = 0);
    int getAttackPoint(){return mAttackPoint;}
    int getHP(){return mHP;}
    int getExpDropped(){return expDropped;}

    //音效
    QMediaPlayer *SFXplayer = nullptr;
    QAudioOutput *audiooutput = nullptr;

    virtual void startSkill();


signals:
    void isHurt();
    void isDead();


protected:
    int mNo;
    bool mMoveDir = 0;
    bool mFaceDir = 0;
    Player* mPlayer;
    int mHP;
    int mAttackPoint;
    qreal mSpeed;
    int expDropped;

    QTimer* skillTimer = nullptr;



};

#endif // ENEMYBASE_H
