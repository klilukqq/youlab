#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "QLabel"
#include "QFile"
#include "model/dataHandler.h"

#include "gui/settings/settings.h"
#include "gui/week/week.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class dayExtend : public QWidget
{
    Q_OBJECT
    dataHandler* data; //= new data_handler();
    QPixmap pic_morning;
    QPixmap pic_evening;
    QPixmap pic_day;
    QPixmap pic_night;

public:
    dayExtend(dataHandler *data, QWidget *parent = nullptr);
    ~dayExtend();

private slots:
    void on_Setting_clicked();

    void on_Next_day_clicked();

    void on_Prev_day_clicked();

public slots:

    void prevFormat();

    void nextFormat();

    void on_ChangeFormat_clicked();

    void update();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
