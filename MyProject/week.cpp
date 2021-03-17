#include "week.h"
#include "ui_week.h"
#include "settings.h"
#include "month.h"

week::week(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::week)
{
    ui->setupUi(this);
    //ui->City->setText(data->getLocate());
}

week::~week()
{
    delete ui;
}

void week::on_Setting_clicked()
{
    settings* setting = new settings();
    setting->show();

}

void week::on_ChangeFormat_clicked()
{
    month* type = new month();
    type->show();
    week::close();
}
