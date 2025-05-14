QT       += core gui multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    bloodstain.cpp \
    bullet.cpp \
    control.cpp \
    define.cpp \
    enemy1.cpp \
    enemy2.cpp \
    enemy3.cpp \
    enemy4.cpp \
    enemybase.cpp \
    enemybullet.cpp \
    expheart.cpp \
    main.cpp \
    mybutton.cpp \
    mydialog.cpp \
    mygraphicsview.cpp \
    myselection.cpp \
    object.cpp \
    player.cpp \
    playerbullet.cpp \
    widget.cpp

HEADERS += \
    bloodstain.h \
    bullet.h \
    control.h \
    define.h \
    enemy1.h \
    enemy2.h \
    enemy3.h \
    enemy4.h \
    enemybase.h \
    enemybullet.h \
    expheart.h \
    mybutton.h \
    mydialog.h \
    mygraphicsview.h \
    myselection.h \
    object.h \
    player.h \
    playerbullet.h \
    widget.h

FORMS += \
    widget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    imgs.qrc
