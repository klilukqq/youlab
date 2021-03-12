#include "day_extend.h"
#include "ui_day_extend.h"
#include "settings.h"
#include "week.h"
#include "QLabel"

day_extend::day_extend(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    QString date = "12.03.21";
    ui->setupUi(this);
    ui->date->insertPlainText(date);
    ui->temp_date->setText(date);
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

