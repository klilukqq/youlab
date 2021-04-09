#ifndef SETTINGS_H
#define SETTINGS_H

#include <QWidget>
#include "model/dataHandler.h"

namespace Ui {
class settings;
}

class settings : public QWidget
{
    Q_OBJECT
    dataHandler* data;
    bool applayed;
    QString PrevLocation;
    int prevCombo;
    int prevWindowParam;

public:
    explicit settings(QWidget *parent = nullptr);
    settings(dataHandler*,QWidget *parent = nullptr);
    ~settings();
    dataHandler* getData(dataHandler*);



signals:
    void signalForUpdate();
    void signalFromButton();

private slots:

    void on_gps_locator_clicked();

    void on_SettingOK_clicked();

    void on_SettingApply_clicked();

    void on_SettingCancel_clicked();

private:
    Ui::settings *ui;
};

#endif // SETTINGS_H
