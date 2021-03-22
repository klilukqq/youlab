#ifndef SETTINGS_H
#define SETTINGS_H

#include <QWidget>
#include "model/data_handler.h"

namespace Ui {
class settings;
}

class settings : public QWidget
{
    Q_OBJECT
    data_handler* data;

    QString PrevLocation;

public:
    explicit settings(QWidget *parent = nullptr);
    settings(data_handler*,QWidget *parent = nullptr);
    ~settings();
    data_handler* getData(data_handler*);


signals:
    void signalFromButton(int);

private slots:

    void on_gps_locator_clicked();

    void on_SettingOK_clicked();

    void on_SettingApply_clicked();

    void on_SettingCancel_clicked();

private:
    Ui::settings *ui;
};

#endif // SETTINGS_H
