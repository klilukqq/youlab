#ifndef WEEK_H
#define WEEK_H

#include <QWidget>
#include "data_handler.h"
#include "ui_week.h"
#include "settings.h"
#include "month.h"
#include "QFile"

namespace Ui {
class week;
}

class week : public QWidget
{
    Q_OBJECT
    data_handler* data;

public:
    explicit week(data_handler* data, QWidget *parent = nullptr);
    ~week();

private slots:
    void on_Setting_clicked();

    void on_ChangeFormat_clicked();

private:
    Ui::week *ui;
};

#endif // WEEK_H
