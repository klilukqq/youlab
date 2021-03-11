#include "month.h"
#include "ui_month.h"
#include "settings.h"
#include "day_short.h"

month::month(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::month)
{
    ui->setupUi(this);
}

month::~month()
{
    delete ui;
}

void month::on_Setting_clicked()
{
    settings* setting = new settings();
    setting->show();
}

void month::on_ChangeFormat_clicked()
{
    day_short* type = new day_short();
    type->show();
    month::close();
}
