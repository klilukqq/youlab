/********************************************************************************
** Form generated from reading UI file 'day_extend.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DAY_EXTEND_H
#define UI_DAY_EXTEND_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *ChangeFormat;
    QPushButton *Setting;
    QPushButton *Next_day;
    QPushButton *Prev_day;
    QGroupBox *night;
    QFrame *night_frame;
    QTextBrowser *time_night;
    QTextBrowser *night_deg;
    QTextBrowser *night_weather;
    QGroupBox *morning;
    QFrame *morning_frame;
    QTextBrowser *time_morning;
    QTextBrowser *morning_deg;
    QTextBrowser *morning_weather;
    QGroupBox *day;
    QFrame *day_frame;
    QTextBrowser *time_day;
    QTextBrowser *day_deg;
    QTextBrowser *day_weather;
    QGroupBox *evening;
    QFrame *evening_frame;
    QTextBrowser *time_morning_2;
    QTextBrowser *evening_deg;
    QTextBrowser *evening_weather;
    QTextBrowser *date;
    QTextBrowser *City;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(696, 442);
        Widget->setMinimumSize(QSize(696, 442));
        Widget->setMaximumSize(QSize(696, 442));
        ChangeFormat = new QPushButton(Widget);
        ChangeFormat->setObjectName(QString::fromUtf8("ChangeFormat"));
        ChangeFormat->setGeometry(QRect(400, 410, 121, 21));
        Setting = new QPushButton(Widget);
        Setting->setObjectName(QString::fromUtf8("Setting"));
        Setting->setGeometry(QRect(550, 410, 121, 21));
        Next_day = new QPushButton(Widget);
        Next_day->setObjectName(QString::fromUtf8("Next_day"));
        Next_day->setEnabled(true);
        Next_day->setGeometry(QRect(400, 30, 31, 31));
        Next_day->setMouseTracking(false);
        Next_day->setAcceptDrops(false);
        Prev_day = new QPushButton(Widget);
        Prev_day->setObjectName(QString::fromUtf8("Prev_day"));
        Prev_day->setEnabled(true);
        Prev_day->setGeometry(QRect(240, 30, 31, 31));
        Prev_day->setMouseTracking(false);
        Prev_day->setAcceptDrops(false);
        night = new QGroupBox(Widget);
        night->setObjectName(QString::fromUtf8("night"));
        night->setGeometry(QRect(20, 100, 151, 211));
        night_frame = new QFrame(night);
        night_frame->setObjectName(QString::fromUtf8("night_frame"));
        night_frame->setGeometry(QRect(30, 60, 91, 71));
        night_frame->setFrameShape(QFrame::StyledPanel);
        night_frame->setFrameShadow(QFrame::Raised);
        time_night = new QTextBrowser(night);
        time_night->setObjectName(QString::fromUtf8("time_night"));
        time_night->setGeometry(QRect(0, 20, 151, 31));
        night_deg = new QTextBrowser(night);
        night_deg->setObjectName(QString::fromUtf8("night_deg"));
        night_deg->setGeometry(QRect(0, 140, 151, 31));
        night_weather = new QTextBrowser(night);
        night_weather->setObjectName(QString::fromUtf8("night_weather"));
        night_weather->setGeometry(QRect(0, 180, 151, 31));
        morning = new QGroupBox(Widget);
        morning->setObjectName(QString::fromUtf8("morning"));
        morning->setGeometry(QRect(190, 100, 151, 211));
        morning_frame = new QFrame(morning);
        morning_frame->setObjectName(QString::fromUtf8("morning_frame"));
        morning_frame->setGeometry(QRect(30, 60, 91, 71));
        morning_frame->setFrameShape(QFrame::StyledPanel);
        morning_frame->setFrameShadow(QFrame::Raised);
        time_morning = new QTextBrowser(morning);
        time_morning->setObjectName(QString::fromUtf8("time_morning"));
        time_morning->setGeometry(QRect(0, 20, 151, 31));
        morning_deg = new QTextBrowser(morning);
        morning_deg->setObjectName(QString::fromUtf8("morning_deg"));
        morning_deg->setGeometry(QRect(0, 140, 151, 31));
        morning_weather = new QTextBrowser(morning);
        morning_weather->setObjectName(QString::fromUtf8("morning_weather"));
        morning_weather->setGeometry(QRect(0, 180, 151, 31));
        day = new QGroupBox(Widget);
        day->setObjectName(QString::fromUtf8("day"));
        day->setGeometry(QRect(360, 100, 151, 211));
        day_frame = new QFrame(day);
        day_frame->setObjectName(QString::fromUtf8("day_frame"));
        day_frame->setGeometry(QRect(30, 60, 91, 71));
        day_frame->setFrameShape(QFrame::StyledPanel);
        day_frame->setFrameShadow(QFrame::Raised);
        time_day = new QTextBrowser(day);
        time_day->setObjectName(QString::fromUtf8("time_day"));
        time_day->setGeometry(QRect(0, 20, 151, 31));
        day_deg = new QTextBrowser(day);
        day_deg->setObjectName(QString::fromUtf8("day_deg"));
        day_deg->setGeometry(QRect(0, 140, 151, 31));
        day_weather = new QTextBrowser(day);
        day_weather->setObjectName(QString::fromUtf8("day_weather"));
        day_weather->setGeometry(QRect(0, 180, 151, 31));
        evening = new QGroupBox(Widget);
        evening->setObjectName(QString::fromUtf8("evening"));
        evening->setGeometry(QRect(530, 100, 151, 211));
        evening_frame = new QFrame(evening);
        evening_frame->setObjectName(QString::fromUtf8("evening_frame"));
        evening_frame->setGeometry(QRect(30, 60, 91, 71));
        evening_frame->setFrameShape(QFrame::StyledPanel);
        evening_frame->setFrameShadow(QFrame::Raised);
        time_morning_2 = new QTextBrowser(evening);
        time_morning_2->setObjectName(QString::fromUtf8("time_morning_2"));
        time_morning_2->setGeometry(QRect(0, 20, 151, 31));
        evening_deg = new QTextBrowser(evening);
        evening_deg->setObjectName(QString::fromUtf8("evening_deg"));
        evening_deg->setGeometry(QRect(0, 140, 151, 31));
        evening_weather = new QTextBrowser(evening);
        evening_weather->setObjectName(QString::fromUtf8("evening_weather"));
        evening_weather->setGeometry(QRect(0, 180, 151, 31));
        date = new QTextBrowser(Widget);
        date->setObjectName(QString::fromUtf8("date"));
        date->setGeometry(QRect(280, 20, 111, 51));
        City = new QTextBrowser(Widget);
        City->setObjectName(QString::fromUtf8("City"));
        City->setGeometry(QRect(480, 10, 201, 31));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        ChangeFormat->setText(QCoreApplication::translate("Widget", "\320\241\320\274\320\265\320\275\320\260 \321\204\320\276\321\200\320\274\320\260\321\202\320\260", nullptr));
        Setting->setText(QCoreApplication::translate("Widget", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270", nullptr));
        Next_day->setText(QCoreApplication::translate("Widget", "->", nullptr));
        Prev_day->setText(QCoreApplication::translate("Widget", "<-", nullptr));
        night->setTitle(QString());
        morning->setTitle(QString());
        day->setTitle(QString());
        evening->setTitle(QString());
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DAY_EXTEND_H
