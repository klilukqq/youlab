/********************************************************************************
** Form generated from reading UI file 'week.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WEEK_H
#define UI_WEEK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_week
{
public:
    QPushButton *ChangeFormat;
    QPushButton *Setting;
    QGroupBox *day1;
    QFrame *frame;
    QTextBrowser *date_1;
    QTextBrowser *day_deg_1;
    QTextBrowser *night_deg_1;
    QTextBrowser *weather_1;
    QGroupBox *day2;
    QFrame *frame_2;
    QTextBrowser *date_2;
    QTextBrowser *day_deg_2;
    QTextBrowser *night_deg_2;
    QTextBrowser *weather_2;
    QGroupBox *day3;
    QFrame *frame_3;
    QTextBrowser *date_3;
    QTextBrowser *day_deg_3;
    QTextBrowser *night_deg_3;
    QTextBrowser *weather_3;
    QGroupBox *day4;
    QFrame *frame_5;
    QTextBrowser *date_4;
    QTextBrowser *day_deg_4;
    QTextBrowser *night_deg_5;
    QTextBrowser *weather_4;
    QGroupBox *day5;
    QFrame *frame_6;
    QTextBrowser *date_5;
    QTextBrowser *day_deg_5;
    QTextBrowser *night_deg_6;
    QTextBrowser *weather_5;
    QGroupBox *day6;
    QFrame *frame_7;
    QTextBrowser *date_6;
    QTextBrowser *day_deg_6;
    QTextBrowser *night_deg_8;
    QTextBrowser *weather_6;
    QGroupBox *day7;
    QFrame *frame_8;
    QTextBrowser *date_7;
    QTextBrowser *day_deg_7;
    QTextBrowser *night_deg_7;
    QTextBrowser *weather_7;
    QLabel *City;

    void setupUi(QWidget *week)
    {
        if (week->objectName().isEmpty())
            week->setObjectName(QStringLiteral("week"));
        week->resize(696, 442);
        week->setMinimumSize(QSize(696, 442));
        week->setMaximumSize(QSize(696, 442));
        ChangeFormat = new QPushButton(week);
        ChangeFormat->setObjectName(QStringLiteral("ChangeFormat"));
        ChangeFormat->setGeometry(QRect(400, 410, 121, 21));
        Setting = new QPushButton(week);
        Setting->setObjectName(QStringLiteral("Setting"));
        Setting->setGeometry(QRect(550, 410, 121, 21));
        day1 = new QGroupBox(week);
        day1->setObjectName(QStringLiteral("day1"));
        day1->setGeometry(QRect(10, 90, 81, 261));
        frame = new QFrame(day1);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(10, 70, 61, 51));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        date_1 = new QTextBrowser(day1);
        date_1->setObjectName(QStringLiteral("date_1"));
        date_1->setGeometry(QRect(0, 20, 81, 31));
        day_deg_1 = new QTextBrowser(day1);
        day_deg_1->setObjectName(QStringLiteral("day_deg_1"));
        day_deg_1->setGeometry(QRect(0, 140, 81, 31));
        night_deg_1 = new QTextBrowser(day1);
        night_deg_1->setObjectName(QStringLiteral("night_deg_1"));
        night_deg_1->setGeometry(QRect(0, 180, 81, 31));
        weather_1 = new QTextBrowser(day1);
        weather_1->setObjectName(QStringLiteral("weather_1"));
        weather_1->setGeometry(QRect(0, 220, 81, 31));
        day2 = new QGroupBox(week);
        day2->setObjectName(QStringLiteral("day2"));
        day2->setGeometry(QRect(110, 90, 81, 261));
        frame_2 = new QFrame(day2);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(10, 70, 61, 51));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        date_2 = new QTextBrowser(day2);
        date_2->setObjectName(QStringLiteral("date_2"));
        date_2->setGeometry(QRect(0, 20, 81, 31));
        day_deg_2 = new QTextBrowser(day2);
        day_deg_2->setObjectName(QStringLiteral("day_deg_2"));
        day_deg_2->setGeometry(QRect(0, 140, 81, 31));
        night_deg_2 = new QTextBrowser(day2);
        night_deg_2->setObjectName(QStringLiteral("night_deg_2"));
        night_deg_2->setGeometry(QRect(0, 180, 81, 31));
        weather_2 = new QTextBrowser(day2);
        weather_2->setObjectName(QStringLiteral("weather_2"));
        weather_2->setGeometry(QRect(0, 220, 81, 31));
        day3 = new QGroupBox(week);
        day3->setObjectName(QStringLiteral("day3"));
        day3->setGeometry(QRect(210, 90, 81, 261));
        frame_3 = new QFrame(day3);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(10, 70, 61, 51));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        date_3 = new QTextBrowser(day3);
        date_3->setObjectName(QStringLiteral("date_3"));
        date_3->setGeometry(QRect(0, 20, 81, 31));
        day_deg_3 = new QTextBrowser(day3);
        day_deg_3->setObjectName(QStringLiteral("day_deg_3"));
        day_deg_3->setGeometry(QRect(0, 140, 81, 31));
        night_deg_3 = new QTextBrowser(day3);
        night_deg_3->setObjectName(QStringLiteral("night_deg_3"));
        night_deg_3->setGeometry(QRect(0, 180, 81, 31));
        weather_3 = new QTextBrowser(day3);
        weather_3->setObjectName(QStringLiteral("weather_3"));
        weather_3->setGeometry(QRect(0, 220, 81, 31));
        day4 = new QGroupBox(week);
        day4->setObjectName(QStringLiteral("day4"));
        day4->setGeometry(QRect(310, 90, 81, 261));
        frame_5 = new QFrame(day4);
        frame_5->setObjectName(QStringLiteral("frame_5"));
        frame_5->setGeometry(QRect(10, 70, 61, 51));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        date_4 = new QTextBrowser(day4);
        date_4->setObjectName(QStringLiteral("date_4"));
        date_4->setGeometry(QRect(0, 20, 81, 31));
        day_deg_4 = new QTextBrowser(day4);
        day_deg_4->setObjectName(QStringLiteral("day_deg_4"));
        day_deg_4->setGeometry(QRect(0, 140, 81, 31));
        night_deg_5 = new QTextBrowser(day4);
        night_deg_5->setObjectName(QStringLiteral("night_deg_5"));
        night_deg_5->setGeometry(QRect(0, 180, 81, 31));
        weather_4 = new QTextBrowser(day4);
        weather_4->setObjectName(QStringLiteral("weather_4"));
        weather_4->setGeometry(QRect(0, 220, 81, 31));
        day5 = new QGroupBox(week);
        day5->setObjectName(QStringLiteral("day5"));
        day5->setGeometry(QRect(410, 90, 81, 261));
        frame_6 = new QFrame(day5);
        frame_6->setObjectName(QStringLiteral("frame_6"));
        frame_6->setGeometry(QRect(10, 70, 61, 51));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        date_5 = new QTextBrowser(day5);
        date_5->setObjectName(QStringLiteral("date_5"));
        date_5->setGeometry(QRect(0, 20, 81, 31));
        day_deg_5 = new QTextBrowser(day5);
        day_deg_5->setObjectName(QStringLiteral("day_deg_5"));
        day_deg_5->setGeometry(QRect(0, 140, 81, 31));
        night_deg_6 = new QTextBrowser(day5);
        night_deg_6->setObjectName(QStringLiteral("night_deg_6"));
        night_deg_6->setGeometry(QRect(0, 180, 81, 31));
        weather_5 = new QTextBrowser(day5);
        weather_5->setObjectName(QStringLiteral("weather_5"));
        weather_5->setGeometry(QRect(0, 220, 81, 31));
        day6 = new QGroupBox(week);
        day6->setObjectName(QStringLiteral("day6"));
        day6->setGeometry(QRect(510, 90, 81, 261));
        frame_7 = new QFrame(day6);
        frame_7->setObjectName(QStringLiteral("frame_7"));
        frame_7->setGeometry(QRect(10, 70, 61, 51));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        date_6 = new QTextBrowser(day6);
        date_6->setObjectName(QStringLiteral("date_6"));
        date_6->setGeometry(QRect(0, 20, 81, 31));
        day_deg_6 = new QTextBrowser(day6);
        day_deg_6->setObjectName(QStringLiteral("day_deg_6"));
        day_deg_6->setGeometry(QRect(0, 140, 81, 31));
        night_deg_8 = new QTextBrowser(day6);
        night_deg_8->setObjectName(QStringLiteral("night_deg_8"));
        night_deg_8->setGeometry(QRect(0, 180, 81, 31));
        weather_6 = new QTextBrowser(day6);
        weather_6->setObjectName(QStringLiteral("weather_6"));
        weather_6->setGeometry(QRect(0, 220, 81, 31));
        day7 = new QGroupBox(week);
        day7->setObjectName(QStringLiteral("day7"));
        day7->setGeometry(QRect(610, 90, 81, 261));
        frame_8 = new QFrame(day7);
        frame_8->setObjectName(QStringLiteral("frame_8"));
        frame_8->setGeometry(QRect(10, 70, 61, 51));
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);
        date_7 = new QTextBrowser(day7);
        date_7->setObjectName(QStringLiteral("date_7"));
        date_7->setGeometry(QRect(0, 20, 81, 31));
        day_deg_7 = new QTextBrowser(day7);
        day_deg_7->setObjectName(QStringLiteral("day_deg_7"));
        day_deg_7->setGeometry(QRect(0, 140, 81, 31));
        night_deg_7 = new QTextBrowser(day7);
        night_deg_7->setObjectName(QStringLiteral("night_deg_7"));
        night_deg_7->setGeometry(QRect(0, 180, 81, 31));
        weather_7 = new QTextBrowser(day7);
        weather_7->setObjectName(QStringLiteral("weather_7"));
        weather_7->setGeometry(QRect(0, 220, 81, 31));
        City = new QLabel(week);
        City->setObjectName(QStringLiteral("City"));
        City->setGeometry(QRect(510, 10, 161, 31));
        QFont font;
        font.setPointSize(14);
        City->setFont(font);

        retranslateUi(week);

        QMetaObject::connectSlotsByName(week);
    } // setupUi

    void retranslateUi(QWidget *week)
    {
        week->setWindowTitle(QApplication::translate("week", "Widget", Q_NULLPTR));
        ChangeFormat->setText(QApplication::translate("week", "\320\241\320\274\320\265\320\275\320\260 \321\204\320\276\321\200\320\274\320\260\321\202\320\260", Q_NULLPTR));
        Setting->setText(QApplication::translate("week", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270", Q_NULLPTR));
        day1->setTitle(QString());
        day2->setTitle(QString());
        day3->setTitle(QString());
        day4->setTitle(QString());
        day5->setTitle(QString());
        day6->setTitle(QString());
        day7->setTitle(QString());
        City->setText(QApplication::translate("week", "City", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class week: public Ui_week {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WEEK_H
