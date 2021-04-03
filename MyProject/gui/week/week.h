#ifndef WEEK_H
#define WEEK_H

#include <QWidget>
#include "model/dataHandler.h"
#include "ui_week.h"
#include "gui/settings/settings.h"
#include "gui/month/month.h"
#include "QFile"
#include <QDate>

namespace Ui {
class week;
}

class week : public QWidget
{
    Q_OBJECT
    dataHandler* data;


public:
    explicit week(dataHandler* data, QWidget *parent = nullptr);
    ~week();

private slots:
    void on_Setting_clicked();

    void on_ChangeFormat_clicked();

private:
    Ui::week *ui;
};

#endif // WEEK_H
