#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "QLabel"
#include "QFile"
#include "model/data_handler.h"
#include "ui_day_extend.h"
#include "gui/settings/settings.h"
#include "gui/week/week.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class day_extend : public QWidget
{
    Q_OBJECT
    data_handler* data; //= new data_handler();
    QPixmap pic_morning;
    QPixmap pic_evening;
    QPixmap pic_day;
    QPixmap pic_night;

public:
    day_extend(data_handler *data, QWidget *parent = nullptr);
    ~day_extend();

private slots:
    void on_Setting_clicked();

    void on_ChangeFormat_clicked();

    void on_Next_day_clicked();

    void on_Prev_day_clicked();

    void on_update_clicked();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
