/********************************************************************************
** Form generated from reading UI file 'week.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WEEK_H
#define UI_WEEK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_week
{
public:
    QPushButton *ChangeFormat;
    QPushButton *Setting;
    QLabel *label;

    void setupUi(QWidget *week)
    {
        if (week->objectName().isEmpty())
            week->setObjectName(QString::fromUtf8("week"));
        week->resize(696, 442);
        ChangeFormat = new QPushButton(week);
        ChangeFormat->setObjectName(QString::fromUtf8("ChangeFormat"));
        ChangeFormat->setGeometry(QRect(400, 410, 121, 21));
        Setting = new QPushButton(week);
        Setting->setObjectName(QString::fromUtf8("Setting"));
        Setting->setGeometry(QRect(550, 410, 121, 21));
        label = new QLabel(week);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(230, 150, 211, 71));

        retranslateUi(week);

        QMetaObject::connectSlotsByName(week);
    } // setupUi

    void retranslateUi(QWidget *week)
    {
        week->setWindowTitle(QCoreApplication::translate("week", "Widget", nullptr));
        ChangeFormat->setText(QCoreApplication::translate("week", "\320\241\320\274\320\265\320\275\320\260 \321\204\320\276\321\200\320\274\320\260\321\202\320\260", nullptr));
        Setting->setText(QCoreApplication::translate("week", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270", nullptr));
        label->setText(QCoreApplication::translate("week", "<html><head/><body><p><span style=\" font-size:11pt; color:#ffaa00;\">\320\235\320\265\320\264\320\265\320\273\321\217 \320\265\321\211\320\265 \320\275\320\265 \320\263\320\276\321\202\320\276\320\262\320\260</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class week: public Ui_week {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WEEK_H
