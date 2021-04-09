#ifndef MONTH_H
#define MONTH_H

#include <QWidget>
#include "model/dataHandler.h"
#include "ui_month.h"
#include "gui/settings/settings.h"
#include "gui/day/dayExtend.h"
#include "oneday.h"


namespace Ui {
class month;
}

class month : public QWidget
{
    Q_OBJECT
    QDate date;
    dataHandler* data;
    oneDay* day = new oneDay[QDate::currentDate().daysInMonth()];

public:
    explicit month(dataHandler* data,QWidget *parent = nullptr);
    ~month();

private slots:
    void on_Setting_clicked(); 

public slots:

    void on_ChangeFormat_clicked();

    void update();

private:
    Ui::month *ui;
};

#endif // MONTH_H
