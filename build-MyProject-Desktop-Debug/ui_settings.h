/********************************************************************************
** Form generated from reading UI file 'settings.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_H
#define UI_SETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
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

    void setupUi(QWidget *settings)
    {
        if (settings->objectName().isEmpty())
            settings->setObjectName(QStringLiteral("settings"));
        settings->resize(273, 401);
        settings->setMinimumSize(QSize(273, 401));
        settings->setMaximumSize(QSize(273, 401));
        SettingOK = new QPushButton(settings);
        SettingOK->setObjectName(QStringLiteral("SettingOK"));
        SettingOK->setGeometry(QRect(200, 360, 61, 23));
        verticalLayoutWidget_2 = new QWidget(settings);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(20, 100, 181, 51));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        rate_update_label = new QLabel(verticalLayoutWidget_2);
        rate_update_label->setObjectName(QStringLiteral("rate_update_label"));

        verticalLayout_2->addWidget(rate_update_label);

        comboBox = new QComboBox(verticalLayoutWidget_2);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        verticalLayout_2->addWidget(comboBox);

        verticalLayoutWidget = new QWidget(settings);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 20, 241, 61));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        setting_start_system = new QCheckBox(verticalLayoutWidget);
        setting_start_system->setObjectName(QStringLiteral("setting_start_system"));

        verticalLayout->addWidget(setting_start_system);

        setting_upper_window = new QCheckBox(verticalLayoutWidget);
        setting_upper_window->setObjectName(QStringLiteral("setting_upper_window"));

        verticalLayout->addWidget(setting_upper_window);

        verticalLayoutWidget_3 = new QWidget(settings);
        verticalLayoutWidget_3->setObjectName(QStringLiteral("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(20, 170, 175, 106));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        source_info_label = new QLabel(verticalLayoutWidget_3);
        source_info_label->setObjectName(QStringLiteral("source_info_label"));

        verticalLayout_3->addWidget(source_info_label);

        source_one = new QRadioButton(verticalLayoutWidget_3);
        source_one->setObjectName(QStringLiteral("source_one"));

        verticalLayout_3->addWidget(source_one);

        source_two = new QRadioButton(verticalLayoutWidget_3);
        source_two->setObjectName(QStringLiteral("source_two"));

        verticalLayout_3->addWidget(source_two);

        source_three = new QRadioButton(verticalLayoutWidget_3);
        source_three->setObjectName(QStringLiteral("source_three"));

        verticalLayout_3->addWidget(source_three);

        gps_locator = new QPushButton(settings);
        gps_locator->setObjectName(QStringLiteral("gps_locator"));
        gps_locator->setGeometry(QRect(170, 300, 41, 31));
        text_locator = new QLineEdit(settings);
        text_locator->setObjectName(QStringLiteral("text_locator"));
        text_locator->setGeometry(QRect(20, 300, 121, 31));
        SettingApply = new QPushButton(settings);
        SettingApply->setObjectName(QStringLiteral("SettingApply"));
        SettingApply->setGeometry(QRect(20, 360, 71, 23));
        SettingCancel = new QPushButton(settings);
        SettingCancel->setObjectName(QStringLiteral("SettingCancel"));
        SettingCancel->setGeometry(QRect(110, 360, 71, 23));

        retranslateUi(settings);

        QMetaObject::connectSlotsByName(settings);
    } // setupUi

    void retranslateUi(QWidget *settings)
    {
        settings->setWindowTitle(QApplication::translate("settings", "Widget", Q_NULLPTR));
        SettingOK->setText(QApplication::translate("settings", "OK", Q_NULLPTR));
        rate_update_label->setText(QApplication::translate("settings", " \320\247\320\260\321\201\321\202\320\276\321\202\320\260 \320\276\320\261\320\275\320\276\320\262\320\273\320\265\320\275\320\270\321\217", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("settings", "\320\240\320\260\320\267 \320\262 \321\201\321\203\321\202\320\272\320\270", Q_NULLPTR)
         << QApplication::translate("settings", "\320\240\320\260\320\267 \320\262 2 \320\264\320\275\321\217", Q_NULLPTR)
         << QApplication::translate("settings", "\320\240\320\260\320\267 \320\262 3 \320\264\320\275\321\217", Q_NULLPTR)
         << QApplication::translate("settings", "\320\240\320\260\320\267 \320\262 5 \320\264\320\275\320\265\320\271", Q_NULLPTR)
         << QApplication::translate("settings", "\320\240\320\260\320\267 \320\262 \320\275\320\265\320\264\320\265\320\273\321\216", Q_NULLPTR)
        );
        setting_start_system->setText(QApplication::translate("settings", "\320\227\320\260\320\277\321\203\321\201\320\272\320\260\321\202\321\214 \320\277\321\200\320\270 \321\201\321\202\320\260\321\200\321\202\320\265 \321\201\320\270\321\201\321\202\320\265\320\274\321\213", Q_NULLPTR));
        setting_upper_window->setText(QApplication::translate("settings", "\320\237\320\276\320\272\320\260\320\267\321\213\320\262\320\260\321\202\321\214 \320\277\320\276\320\262\320\265\321\200\321\205 \320\262\321\201\320\265\321\205 \320\276\320\272\320\276\320\275", Q_NULLPTR));
        source_info_label->setText(QApplication::translate("settings", "\320\230\321\201\321\202\320\276\321\207\320\275\320\270\320\272 \320\270\320\270\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\320\270", Q_NULLPTR));
        source_one->setText(QApplication::translate("settings", "\320\230\321\201\321\202\320\276\321\207\320\275\320\270\320\272 1", Q_NULLPTR));
        source_two->setText(QApplication::translate("settings", "\320\230\321\201\321\202\320\276\321\207\320\275\320\270\320\272 2", Q_NULLPTR));
        source_three->setText(QApplication::translate("settings", "\320\230\321\201\321\202\320\276\321\207\320\275\320\270\320\272 3", Q_NULLPTR));
        gps_locator->setText(QApplication::translate("settings", "GPS", Q_NULLPTR));
        text_locator->setText(QString());
        SettingApply->setText(QApplication::translate("settings", "Apply", Q_NULLPTR));
        SettingCancel->setText(QApplication::translate("settings", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class settings: public Ui_settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H
