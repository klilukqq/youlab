QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
QT += location

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    gui/day/day_extend.cpp \
    gui/month/month.cpp \
    gui/settings/settings.cpp \
    gui/week/week.cpp \
    main/main.cpp \
    model/data_handler.cpp \

HEADERS += \
    gui/day/day_extend.h \
    gui/month/month.h \
    gui/settings/settings.h \
    gui/week/week.h \
    model/data_handler.h

FORMS += \
    gui/day/day_extend.ui \
    gui/month/month.ui \
    gui/settings/settings.ui \
    gui/week/week.ui

TRANSLATIONS += \
    MyProject_ru_RU.ts

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
