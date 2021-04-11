/********************************************************************************
** Form generated from reading UI file 'month.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MONTH_H
#define UI_MONTH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_month
{
public:
    QPushButton *ChangeFormat;
    QPushButton *Setting;
    QLabel *City;
    QWidget *gridLayoutWidget;
    QGridLayout *monthLayout;

    void setupUi(QWidget *month)
    {
        if (month->objectName().isEmpty())
            month->setObjectName(QString::fromUtf8("month"));
        month->resize(696, 442);
        ChangeFormat = new QPushButton(month);
        ChangeFormat->setObjectName(QString::fromUtf8("ChangeFormat"));
        ChangeFormat->setGeometry(QRect(410, 416, 121, 21));
        Setting = new QPushButton(month);
        Setting->setObjectName(QString::fromUtf8("Setting"));
        Setting->setGeometry(QRect(560, 416, 121, 21));
        City = new QLabel(month);
        City->setObjectName(QString::fromUtf8("City"));
        City->setGeometry(QRect(40, 420, 131, 21));
        QFont font;
        font.setPointSize(14);
        City->setFont(font);
        gridLayoutWidget = new QWidget(month);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 0, 701, 411));
        monthLayout = new QGridLayout(gridLayoutWidget);
        monthLayout->setObjectName(QString::fromUtf8("monthLayout"));
        monthLayout->setContentsMargins(0, 0, 0, 0);

        retranslateUi(month);

        QMetaObject::connectSlotsByName(month);
    } // setupUi

    void retranslateUi(QWidget *month)
    {
        month->setWindowTitle(QCoreApplication::translate("month", "Widget", nullptr));
        ChangeFormat->setText(QCoreApplication::translate("month", "\320\241\320\274\320\265\320\275\320\260 \321\204\320\276\321\200\320\274\320\260\321\202\320\260", nullptr));
        Setting->setText(QCoreApplication::translate("month", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270", nullptr));
        City->setText(QCoreApplication::translate("month", "City", nullptr));
    } // retranslateUi

};

namespace Ui {
    class month: public Ui_month {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MONTH_H
