#include "myselection.h"
#include"widget.h"

QStringList mySelectiveButton::itemDescriptions =
{
    "Mercurius\n1.+5%移速\n2.+1s无敌\n3.\n*抵御一次致命伤",
    "Pluto\n1.+10%攻速\n",
    "晚餐\n1. +2HP\n",
    "Terrian\n1.+2攻击\n\n",
    "Venus\n1.+3HP\n2.-10%移速",
    "献祭者之血\n1.+2伤害\n2.+1吸血\n3.-2HP",
    "过量类固醇\n1.+20%攻速\n2.+20移速\n3.-1额外子弹",
    "病毒\n1.+20%攻速\n2.+20移速\n3.-1maxHP",
    "一美元\n1.+10% xp获取\n2.防御 -1\n3.生命窃取 +5%",
    "铁丝衣架\n1.+2额外子弹\n2.-1移速\n3.伤害率 +5%",
    "鲍勃的烂头\n1.+3伤害\n2.+10%攻速\n3.-2HP",
    "死灵之书\n1.伤害率 -50%\n2.攻击力 -10\n3.+20%吸血",
    "契约\n1.攻击力 +3\n2.攻击速度 +15%\n3.防御 -2",
    "地狱契约\n1.防御 +5\n2.-10%经验加成 ",
    "嗖—哒—呜\n1.生命值 +4\n2.生命恢复 +2",
    "圣经\n1.+10%经验加成 \n2.生命值 +1\n3.防御 +1",
    "撒旦圣经\n1.+20%经验加成 \n2.攻击速度 +10%",
    "彼列之书\n1.伤害率 +10%\n2.生命值 +5\n3.移速 -5%",
    "无芒星\n1.+15%攻速\n",
    "妈妈的眼睛\n1.+2额外子弹 \n2.-10%伤害率 \n3.-20%攻击速度 \n",
    "死亡之眼\n1.攻击速度 +5%\n2.生命值 +2\n3.生命恢复 +3",
    "以撒的心脏\n1.伤害率 +10%\n2.生命值 +2\n3.移速 +5%",
    "断头台\n1.-50%伤害率 \n2.-10攻击力 \n3.+10%吸血",
    "steam大促销\n1.+1击退\n2.+3HP\n3.-20%经验加成 "
};
mySelectiveButton::mySelectiveButton(QWidget *parent)
    : QToolButton{parent}
{}

mySelectiveButton::~mySelectiveButton()
{
    //delete label;
}

mySelectiveButton::mySelectiveButton(int _itemID, QWidget *parent)
    :QToolButton{parent}
{

    itemID = _itemID;
    this->setFixedSize(200,200);

    QString address = ":/item/img/items/item";
    address += QString::number(itemID);
    address += ".png";
    this->setIcon(QIcon(address));
    this->setIconSize(QSize(200,200));
    this->setAutoRaise(true);
    //this->setStyleSheet("QToolButton{border-radius: 6px;}");

}

void mySelectiveButton::enterEvent(QEnterEvent *event)
{
    if(label == nullptr)
    {
        label = new QLabel(GameWidget::widget);
        label->move(this->pos() + QPoint(0,200));
        label->setFixedSize(200,200);
        //label->setText(QString::number(itemID));//物品信息
        label->setText(itemDescriptions.at(itemID));
        label->setStyleSheet("QLabel{border-radius: 0px;"
                                  "background-color: rgb(25, 25, 25);"
                                  "color: rgb(225, 225, 225);}");
    }
    label->show();
}

void mySelectiveButton::leaveEvent(QEvent *event)
{
    label->hide();

}
