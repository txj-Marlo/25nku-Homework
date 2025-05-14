#include "enemy3.h"
#include"widget.h"

enemyBig::enemyBig(Player *_player, int _HP, int _AttackPoint, qreal _Speed, int _exp)
    :EnemyBase(_player,_HP,_AttackPoint,_Speed,_exp)
{
    this->setPixmap(QPixmap(":/roles/img/roles/enemy3.png"));
    this->setScale(0.4);
    mNo = 3;

    skillTimer = new QTimer(this);

    skillTimer->start(2000);
    connect(skillTimer,&QTimer::timeout,this,&enemyBig::startSkill);

    //设置特效音
    SFXplayer = new QMediaPlayer(this);
    audiooutput = new QAudioOutput(this);
    SFXplayer->setAudioOutput(audiooutput);
    SFXplayer->setSource(QUrl("qrc:/sfx/sounds/bigSFX.MP3"));
}

void enemyBig::setMirrorPixmap()
{
    EnemyBase::setMirrorPixmap();
}

void enemyBig::startSkill()
{
    if(!GameWidget::widget->isRunning) return ;
    //qDebug() << "skill start";
    if(scale()<0.5)
    {
        mSpeed *= 1.2;
        mAttackPoint *= 1.3;
        mHP /= 2;
        if(mHP == 0) mHP = 1;
    }
    SFXplayer->play();
}
