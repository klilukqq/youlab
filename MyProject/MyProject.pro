QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets


CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    gui/day/dayExtend.cpp \
    gui/month/oneDay.cpp \
    main/main.cpp \
    gui/week/week.cpp \
    gui/month/month.cpp \
    gui/settings/settings.cpp \
    model/dataHandler.cpp

HEADERS += \
    gui/day/dayExtend.h \
    gui/month/month.h \
    gui/month/oneDay.h \
    gui/settings/settings.h \
    gui/week/week.h \
    model/dataHandler.h

FORMS += \
    gui/day/dayExtend.ui \
    gui/month/month.ui \
    gui/month/oneDay.ui \
    gui/settings/settings.ui \
    gui/week/week.ui

TRANSLATIONS += \
    MyProject_ru_RU.ts

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
