/********************************************************************************
** Form generated from reading UI file 'settings.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_H
#define UI_SETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_settings
{
public:
    QPushButton *SettingOK;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *rate_update_label;
    QComboBox *comboBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QCheckBox *setting_start_system;
    QCheckBox *setting_upper_window;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *source_info_label;
    QRadioButton *source_one;
    QRadioButton *source_two;
    QRadioButton *source_three;
    QPushButton *gps_locator;
    QLineEdit *text_locator;
    QPushButton *SettingApply;
    QPushButton *SettingCancel;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_4;
    QLabel *format_days;
    QComboBox *format_combo;

    void setupUi(QWidget *settings)
    {
        if (settings->objectName().isEmpty())
            settings->setObjectName(QString::fromUtf8("settings"));
        settings->resize(273, 401);
        settings->setMinimumSize(QSize(273, 401));
        settings->setMaximumSize(QSize(273, 401));
        SettingOK = new QPushButton(settings);
        SettingOK->setObjectName(QString::fromUtf8("SettingOK"));
        SettingOK->setGeometry(QRect(200, 370, 61, 23));
        verticalLayoutWidget_2 = new QWidget(settings);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(20, 140, 181, 51));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        rate_update_label = new QLabel(verticalLayoutWidget_2);
        rate_update_label->setObjectName(QString::fromUtf8("rate_update_label"));

        verticalLayout_2->addWidget(rate_update_label);

        comboBox = new QComboBox(verticalLayoutWidget_2);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        verticalLayout_2->addWidget(comboBox);

        verticalLayoutWidget = new QWidget(settings);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 10, 241, 61));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        setting_start_system = new QCheckBox(verticalLayoutWidget);
        setting_start_system->setObjectName(QString::fromUtf8("setting_start_system"));

        verticalLayout->addWidget(setting_start_system);

        setting_upper_window = new QCheckBox(verticalLayoutWidget);
        setting_upper_window->setObjectName(QString::fromUtf8("setting_upper_window"));

        verticalLayout->addWidget(setting_upper_window);

        verticalLayoutWidget_3 = new QWidget(settings);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(20, 210, 175, 106));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        source_info_label = new QLabel(verticalLayoutWidget_3);
        source_info_label->setObjectName(QString::fromUtf8("source_info_label"));

        verticalLayout_3->addWidget(source_info_label);

        source_one = new QRadioButton(verticalLayoutWidget_3);
        source_one->setObjectName(QString::fromUtf8("source_one"));

        verticalLayout_3->addWidget(source_one);

        source_two = new QRadioButton(verticalLayoutWidget_3);
        source_two->setObjectName(QString::fromUtf8("source_two"));

        verticalLayout_3->addWidget(source_two);

        source_three = new QRadioButton(verticalLayoutWidget_3);
        source_three->setObjectName(QString::fromUtf8("source_three"));

        verticalLayout_3->addWidget(source_three);

        gps_locator = new QPushButton(settings);
        gps_locator->setObjectName(QString::fromUtf8("gps_locator"));
        gps_locator->setGeometry(QRect(170, 330, 41, 31));
        text_locator = new QLineEdit(settings);
        text_locator->setObjectName(QString::fromUtf8("text_locator"));
        text_locator->setGeometry(QRect(20, 330, 121, 31));
        SettingApply = new QPushButton(settings);
        SettingApply->setObjectName(QString::fromUtf8("SettingApply"));
        SettingApply->setGeometry(QRect(20, 370, 71, 23));
        SettingCancel = new QPushButton(settings);
        SettingCancel->setObjectName(QString::fromUtf8("SettingCancel"));
        SettingCancel->setGeometry(QRect(110, 370, 71, 23));
        verticalLayoutWidget_4 = new QWidget(settings);
        verticalLayoutWidget_4->setObjectName(QString::fromUtf8("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(20, 80, 181, 51));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        format_days = new QLabel(verticalLayoutWidget_4);
        format_days->setObjectName(QString::fromUtf8("format_days"));

        verticalLayout_4->addWidget(format_days);

        format_combo = new QComboBox(verticalLayoutWidget_4);
        format_combo->addItem(QString());
        format_combo->addItem(QString());
        format_combo->addItem(QString());
        format_combo->setObjectName(QString::fromUtf8("format_combo"));

        verticalLayout_4->addWidget(format_combo);


        retranslateUi(settings);

        QMetaObject::connectSlotsByName(settings);
    } // setupUi

    void retranslateUi(QWidget *settings)
    {
        settings->setWindowTitle(QCoreApplication::translate("settings", "Widget", nullptr));
        SettingOK->setText(QCoreApplication::translate("settings", "OK", nullptr));
        rate_update_label->setText(QCoreApplication::translate("settings", " \320\247\320\260\321\201\321\202\320\276\321\202\320\260 \320\276\320\261\320\275\320\276\320\262\320\273\320\265\320\275\320\270\321\217", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("settings", "\320\240\320\260\320\267 \320\262 \321\201\321\203\321\202\320\272\320\270", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("settings", "\320\240\320\260\320\267 \320\262 2 \320\264\320\275\321\217", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("settings", "\320\240\320\260\320\267 \320\262 3 \320\264\320\275\321\217", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("settings", "\320\240\320\260\320\267 \320\262 5 \320\264\320\275\320\265\320\271", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("settings", "\320\240\320\260\320\267 \320\262 \320\275\320\265\320\264\320\265\320\273\321\216", nullptr));

        setting_start_system->setText(QCoreApplication::translate("settings", "\320\227\320\260\320\277\321\203\321\201\320\272\320\260\321\202\321\214 \320\277\321\200\320\270 \321\201\321\202\320\260\321\200\321\202\320\265 \321\201\320\270\321\201\321\202\320\265\320\274\321\213", nullptr));
        setting_upper_window->setText(QCoreApplication::translate("settings", "\320\237\320\276\320\272\320\260\320\267\321\213\320\262\320\260\321\202\321\214 \320\277\320\276\320\262\320\265\321\200\321\205 \320\262\321\201\320\265\321\205 \320\276\320\272\320\276\320\275", nullptr));
        source_info_label->setText(QCoreApplication::translate("settings", "\320\230\321\201\321\202\320\276\321\207\320\275\320\270\320\272 \320\270\320\270\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\320\270", nullptr));
        source_one->setText(QCoreApplication::translate("settings", "\320\230\321\201\321\202\320\276\321\207\320\275\320\270\320\272 1", nullptr));
        source_two->setText(QCoreApplication::translate("settings", "\320\230\321\201\321\202\320\276\321\207\320\275\320\270\320\272 2", nullptr));
        source_three->setText(QCoreApplication::translate("settings", "\320\230\321\201\321\202\320\276\321\207\320\275\320\270\320\272 3", nullptr));
        gps_locator->setText(QCoreApplication::translate("settings", "GPS", nullptr));
        text_locator->setText(QString());
        SettingApply->setText(QCoreApplication::translate("settings", "Apply", nullptr));
        SettingCancel->setText(QCoreApplication::translate("settings", "Cancel", nullptr));
        format_days->setText(QCoreApplication::translate("settings", "\320\230\320\267\320\275\320\260\321\207\320\260\320\273\321\214\320\275\321\213\320\271 \321\204\320\276\321\200\320\274\320\260\321\202", nullptr));
        format_combo->setItemText(0, QCoreApplication::translate("settings", "\320\224\320\265\320\275\321\214", nullptr));
        format_combo->setItemText(1, QCoreApplication::translate("settings", "7 \320\264\320\275\320\265\320\271", nullptr));
        format_combo->setItemText(2, QCoreApplication::translate("settings", "30 \320\264\320\275\320\265\320\271", nullptr));

    } // retranslateUi

};

namespace Ui {
    class settings: public Ui_settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H
