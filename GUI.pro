QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    UI_stylesheet.cpp \
    casting.cpp \
    main.cpp \
    mainwindow.cpp \
    preprocess.cpp

HEADERS += \
    UI_stylesheet.h \
    casting.h \
    mainwindow.h \
    preprocess.h

FORMS += \
    casting.ui \
    mainwindow.ui \
    preprocess.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    images.qrc
