/********************************************************************************
** Form generated from reading UI file 'oneday.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ONEDAY_H
#define UI_ONEDAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_oneDay
{
public:
    QGroupBox *groupBox;
    QLabel *dateMonth;
    QLabel *deqrMothDay;
    QLabel *FrameMonth;
    QLabel *DeqrNightMonht;

    void setupUi(QWidget *oneDay)
    {
        if (oneDay->objectName().isEmpty())
            oneDay->setObjectName(QString::fromUtf8("oneDay"));
        oneDay->resize(91, 81);
        oneDay->setMinimumSize(QSize(90, 81));
        oneDay->setMaximumSize(QSize(91, 82));
        groupBox = new QGroupBox(oneDay);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 91, 81));
        dateMonth = new QLabel(groupBox);
        dateMonth->setObjectName(QString::fromUtf8("dateMonth"));
        dateMonth->setGeometry(QRect(10, 0, 71, 21));
        deqrMothDay = new QLabel(groupBox);
        deqrMothDay->setObjectName(QString::fromUtf8("deqrMothDay"));
        deqrMothDay->setGeometry(QRect(0, 30, 31, 21));
        FrameMonth = new QLabel(groupBox);
        FrameMonth->setObjectName(QString::fromUtf8("FrameMonth"));
        FrameMonth->setGeometry(QRect(40, 30, 51, 51));
        DeqrNightMonht = new QLabel(groupBox);
        DeqrNightMonht->setObjectName(QString::fromUtf8("DeqrNightMonht"));
        DeqrNightMonht->setGeometry(QRect(0, 60, 31, 21));

        retranslateUi(oneDay);

        QMetaObject::connectSlotsByName(oneDay);
    } // setupUi

    void retranslateUi(QWidget *oneDay)
    {
        oneDay->setWindowTitle(QCoreApplication::translate("oneDay", "Form", nullptr));
        groupBox->setTitle(QString());
        dateMonth->setText(QCoreApplication::translate("oneDay", "Date", nullptr));
        deqrMothDay->setText(QCoreApplication::translate("oneDay", "Day", nullptr));
        FrameMonth->setText(QCoreApplication::translate("oneDay", "Image", nullptr));
        DeqrNightMonht->setText(QCoreApplication::translate("oneDay", "Night", nullptr));
    } // retranslateUi

};

namespace Ui {
    class oneDay: public Ui_oneDay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ONEDAY_H
