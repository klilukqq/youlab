#include "day_short.h"
#include "ui_day_short.h"
#include "settings.h"
#include "day_extend.h"

day_short::day_short(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::day_short)
{
    ui->setupUi(this);
}

day_short::~day_short()
{
    delete ui;
}

void day_short::on_Setting_clicked()
{
    settings* setting = new settings();
    setting->show();
}

void day_short::on_ChangeFormat_clicked()
{
    day_extend* type = new day_extend();
    type->show();
    day_short::close();
}
