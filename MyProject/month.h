#ifndef MONTH_H
#define MONTH_H

#include <QWidget>
#include "data_handler.h"

namespace Ui {
class month;
}

class month : public QWidget
{
    Q_OBJECT
    data_handler* data;

public:
    explicit month(data_handler* data,QWidget *parent = nullptr);
    ~month();

private slots:
    void on_Setting_clicked();

    void on_ChangeFormat_clicked();

private:
    Ui::month *ui;
};

#endif // MONTH_H
