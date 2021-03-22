/********************************************************************************
** Form generated from reading UI file 'oneday.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ONEDAY_H
#define UI_ONEDAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OneDay
{
public:

    void setupUi(QWidget *OneDay)
    {
        if (OneDay->objectName().isEmpty())
            OneDay->setObjectName(QStringLiteral("OneDay"));
        OneDay->resize(252, 255);

        retranslateUi(OneDay);

        QMetaObject::connectSlotsByName(OneDay);
    } // setupUi

    void retranslateUi(QWidget *OneDay)
    {
        OneDay->setWindowTitle(QApplication::translate("OneDay", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class OneDay: public Ui_OneDay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ONEDAY_H
