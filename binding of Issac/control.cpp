#include "control.h"
#include"widget.h"


GameControl::GameControl() {
    setParent(GameWidget::widget);//链接对象树
}

GameControl* GameControl::instance = nullptr;//类外初始化

void GameControl::EnemySummonControl(int _time)
{
    GameTime = _time;

    if(GameTime > 110)
    {
        //生命 攻击 速度 经验 种类
        for(int i=0;i<QRandomGenerator::global()->bounded(1,3);i++)
            GameWidget::widget->enemySummon(2,1,0.4,QRandomGenerator::global()->bounded(5,16),1);
    }
    else if(GameTime > 100)
    {
        if(GameTime %3 == 0)
        {
            int x = QRandomGenerator::global()->bounded(1,3);
            for(int i=0;i<x;i++)
                GameWidget::widget->enemySummon(5,1,0.8,QRandomGenerator::global()->bounded(5,12),1);}

        if(GameTime %3 == 1)
            GameWidget::widget->enemySummon(6,2,0.9,QRandomGenerator::global()->bounded(5,14),2);
    }
    else if(GameTime > 90)
    {

        GameWidget::widget->enemySummon(10,2,1.3,QRandomGenerator::global()->bounded(3,7),1);
        if(GameTime %4 == 0)
        {
            GameWidget::widget->enemySummon(80,3,1.2,QRandomGenerator::global()->bounded(4,8),3);
        }
        if (GameTime %4 == 1)
        {
            GameWidget::widget->enemySummon(14,4,1.4,QRandomGenerator::global()->bounded(4,8),2);
        }
    }
    else if(GameTime > 80)
    {
        if(GameTime % 5 == 0)
        {
            GameWidget::widget->enemySummon(70,3,0.3,QRandomGenerator::global()->bounded(12,20),4);
        }
        if(GameTime %3 == 0)
        {
            int x = QRandomGenerator::global()->bounded(1,4);
            for(int i=0;i<x;i++)
                GameWidget::widget->enemySummon(20,3,1.2,QRandomGenerator::global()->bounded(8,14),1);
        }
        if(GameTime % 5 == 1)
        {
            int x = QRandomGenerator::global()->bounded(1,3);
            for(int i=0;i<x;i++)
                GameWidget::widget->enemySummon(22,3,1.6,QRandomGenerator::global()->bounded(8,16),2);
        }
    }
    else if(GameTime > 70)
    {
        if(GameTime % 6 == 0)
        {
            GameWidget::widget->enemySummon(150,12,0.4,QRandomGenerator::global()->bounded(25,30),4);
        }
        if(GameTime %3 == 0)
        {
            GameWidget::widget->enemySummon(300,8,1.2,QRandomGenerator::global()->bounded(15,20),3);
        }
        else if(GameTime %3 == 1)
        {
            int x = QRandomGenerator::global()->bounded(1,3);
            for(int i=0;i<x;i++)
                GameWidget::widget->enemySummon(30,4,1.6,QRandomGenerator::global()->bounded(8,16),1);
        }
    }
    else if(GameTime > 60)
    {
        if(GameTime %3 == 0)
        {
            int x = QRandomGenerator::global()->bounded(1,4);
            for(int i=0;i<x;i++)
                GameWidget::widget->enemySummon(34,6,1.2,QRandomGenerator::global()->bounded(8,14),1);
        }
        else if(GameTime %3 == 1)
        {
            int x = QRandomGenerator::global()->bounded(1,3);
            for(int i=0;i<x;i++)
            GameWidget::widget->enemySummon(36,8,1.8,QRandomGenerator::global()->bounded(6,12),2);
        }
        if(GameTime %5 == 0)
            GameWidget::widget->enemySummon(200,18,0.4,QRandomGenerator::global()->bounded(6,12),4);
    }
    else if(GameTime > 50)
    {
        if(GameTime == 120) GameWidget::widget->enemySummon(3000,1,1,100,5);
        if(GameTime %3 == 0)
        {
            GameWidget::widget->enemySummon(600,12,1.3,QRandomGenerator::global()->bounded(8,12),3);
        }
        else if(GameTime %3 == 1)
        {
            int x = QRandomGenerator::global()->bounded(1,4);
            for(int i=0;i<x;i++)
                GameWidget::widget->enemySummon(60,16,1.2,QRandomGenerator::global()->bounded(7,10),1);
        }
        if(GameTime % 5 == 0)
            GameWidget::widget->enemySummon(300,32,0.4,QRandomGenerator::global()->bounded(8,14),4);
    }
    else if(GameTime > 40)
    {
        if(GameTime %3 == 0)
        {
            int x = QRandomGenerator::global()->bounded(1,3);
            for(int i=0;i<x;i++)
                GameWidget::widget->enemySummon(80,4,1.8,QRandomGenerator::global()->bounded(8,14),2);
        }
        if(GameTime % 5 == 0)
            GameWidget::widget->enemySummon(400,10,0.4,QRandomGenerator::global()->bounded(8,14),4);
    }
    else if(GameTime > 30)
    {
        if(GameTime == 60) GameWidget::widget->enemySummon(10000,2,1,100,5);
        if(GameTime %3 == 0)
        {
            int x = QRandomGenerator::global()->bounded(1,3);
            for(int i=0;i<x;i++)
                GameWidget::widget->enemySummon(70,8,2,QRandomGenerator::global()->bounded(6,10),2);
        }
        else if(GameTime %3 == 1)
        {
            GameWidget::widget->enemySummon(400,10,1.5,QRandomGenerator::global()->bounded(6,10),3);
        }
        else if(GameTime %3 == 2)
        {
            GameWidget::widget->enemySummon(90,10,0.5,QRandomGenerator::global()->bounded(6,10),4);
        }
    }
    else
    {
        if(GameTime %3 == 0)
        {
            int x = QRandomGenerator::global()->bounded(1,4);
            for(int i=0;i<x;i++)
            GameWidget::widget->enemySummon(120,8,2,QRandomGenerator::global()->bounded(6,10),2);
        }
        else if(GameTime %3 == 1)
        {
            int x = QRandomGenerator::global()->bounded(1,3);
            for(int i=0;i<x;i++)
            GameWidget::widget->enemySummon(800,20,1.5,QRandomGenerator::global()->bounded(6,10),3);
        }
        else if(GameTime %3 == 2)
        {
            GameWidget::widget->enemySummon(400,20,0.5,QRandomGenerator::global()->bounded(6,10),4);
        }
    }
}


