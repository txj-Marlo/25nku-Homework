#ifndef MYSELECTION_H
#define MYSELECTION_H

#include <QToolButton>
#include<QLabel>
#include<QStringList>

class mySelectiveButton : public QToolButton
{
    Q_OBJECT
public:
    explicit mySelectiveButton(QWidget *parent = nullptr);
    ~mySelectiveButton();
    mySelectiveButton(int _itemID,QWidget *parent = nullptr);


    static QStringList itemDescriptions;

    void enterEvent(QEnterEvent *event) override;
    void leaveEvent(QEvent *event) override;

signals:


private:
    QLabel* label = nullptr;
    int itemID;
};

#endif // MYSELECTION_H
