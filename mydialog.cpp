#include "mydialog.h"

myDialog::myDialog(QWidget *parent)
    : QDialog{parent}
{
    this->resize(900,314);
    view.setParent(this);
    view.setSceneRect(QRect(0,0,900,314));
    scene.setSceneRect(QRect(0,0,900,314));
    scene.addPixmap(QPixmap(":/ui/img/ui/details.png"));
    view.setScene(&scene);

}
