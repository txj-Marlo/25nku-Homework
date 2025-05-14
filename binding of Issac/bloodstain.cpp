#include "bloodstain.h"
#include "widget.h"


bloodstain::bloodstain(QPointF _pos) {
    this->setPixmap(QPixmap(":/icons/img/blood.png"));
    this->setScale(0.2);
    this->setPos(_pos);
}
