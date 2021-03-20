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

public:
    explicit settings(QWidget *parent = nullptr);
    settings(data_handler*,QWidget *parent = nullptr);
    ~settings();
    data_handler* getData(data_handler*);

private slots:
    void on_Setting_clicked();

    void on_gps_locator_clicked();

private:
    Ui::settings *ui;
};

#endif // SETTINGS_H
