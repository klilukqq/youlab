#include "day_extend.h"
#include "ui_day_extend.h"
#include "settings.h"
#include "week.h"

day_extend::day_extend(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

day_extend::~day_extend()
{
    delete ui;
}


void day_extend::on_Setting_clicked()
{
    settings* setting = new settings;
    setting->show();
}

void day_extend::on_ChangeFormat_clicked()
{
    week* type = new week();
    type->show();
    day_extend::close();
}
