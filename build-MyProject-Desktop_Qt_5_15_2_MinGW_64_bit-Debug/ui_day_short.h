/********************************************************************************
** Form generated from reading UI file 'day_short.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DAY_SHORT_H
#define UI_DAY_SHORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_day_short
{
public:
    QPushButton *ChangeFormat;
    QPushButton *Setting;

    void setupUi(QWidget *day_short)
    {
        if (day_short->objectName().isEmpty())
            day_short->setObjectName(QString::fromUtf8("day_short"));
        day_short->resize(426, 387);
        ChangeFormat = new QPushButton(day_short);
        ChangeFormat->setObjectName(QString::fromUtf8("ChangeFormat"));
        ChangeFormat->setGeometry(QRect(140, 350, 121, 21));
        Setting = new QPushButton(day_short);
        Setting->setObjectName(QString::fromUtf8("Setting"));
        Setting->setGeometry(QRect(290, 350, 121, 21));

        retranslateUi(day_short);

        QMetaObject::connectSlotsByName(day_short);
    } // setupUi

    void retranslateUi(QWidget *day_short)
    {
        day_short->setWindowTitle(QCoreApplication::translate("day_short", "Form", nullptr));
        ChangeFormat->setText(QCoreApplication::translate("day_short", "\320\241\320\274\320\265\320\275\320\260 \321\204\320\276\321\200\320\274\320\260\321\202\320\260", nullptr));
        Setting->setText(QCoreApplication::translate("day_short", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class day_short: public Ui_day_short {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DAY_SHORT_H
