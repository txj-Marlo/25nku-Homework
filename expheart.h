#ifndef EXPHEART_H
#define EXPHEART_H
#include"object.h"


class ExpBall : public GameObject
{
public:
    ExpBall(int _value, QPointF _pos);
    ~ExpBall() {}

    int getVal(){return expValue;}

    void expBallMove();

private:
    int expValue;
    qreal moveSpeed;
};


#endif // EXPHEART_H
