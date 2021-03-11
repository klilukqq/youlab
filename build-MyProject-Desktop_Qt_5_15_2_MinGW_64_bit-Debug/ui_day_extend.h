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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *ChangeFormat;
    QPushButton *Setting;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *Night;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *Morning;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_4;
    QPushButton *Next_day;
    QPushButton *Prev_day;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(696, 442);
        ChangeFormat = new QPushButton(Widget);
        ChangeFormat->setObjectName(QString::fromUtf8("ChangeFormat"));
        ChangeFormat->setGeometry(QRect(400, 410, 121, 21));
        Setting = new QPushButton(Widget);
        Setting->setObjectName(QString::fromUtf8("Setting"));
        Setting->setGeometry(QRect(550, 410, 121, 21));
        verticalLayoutWidget = new QWidget(Widget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 110, 151, 201));
        Night = new QVBoxLayout(verticalLayoutWidget);
        Night->setObjectName(QString::fromUtf8("Night"));
        Night->setContentsMargins(0, 0, 0, 0);
        verticalLayoutWidget_2 = new QWidget(Widget);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(190, 110, 151, 201));
        Morning = new QVBoxLayout(verticalLayoutWidget_2);
        Morning->setObjectName(QString::fromUtf8("Morning"));
        Morning->setContentsMargins(0, 0, 0, 0);
        verticalLayoutWidget_3 = new QWidget(Widget);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(360, 110, 151, 201));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayoutWidget_4 = new QWidget(Widget);
        verticalLayoutWidget_4->setObjectName(QString::fromUtf8("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(530, 110, 151, 201));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        Next_day = new QPushButton(Widget);
        Next_day->setObjectName(QString::fromUtf8("Next_day"));
        Next_day->setEnabled(true);
        Next_day->setGeometry(QRect(390, 30, 31, 31));
        Next_day->setMouseTracking(false);
        Next_day->setAcceptDrops(false);
        Prev_day = new QPushButton(Widget);
        Prev_day->setObjectName(QString::fromUtf8("Prev_day"));
        Prev_day->setEnabled(true);
        Prev_day->setGeometry(QRect(240, 30, 31, 31));
        Prev_day->setMouseTracking(false);
        Prev_day->setAcceptDrops(false);

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
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DAY_EXTEND_H
