#include "day_extend.h"



//#include <QDate>

day_extend::day_extend(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    QFile file("conf.txt");

    if ((file.exists())&&(file.open(QIODevice::ReadOnly)))
    {
        data->setLocate(file.readAll());
        file.close();
    }
    //data->setLocate(file.readAll());
    //date = new data_handler();

    pic_day.load("image\\Weather_Sun.png");
    pic_night.load("image\\Weather_Cloud.png");
    pic_evening.load("image\\Weather_CloudAndSun.png");
    pic_morning.load("image\\Weather_CloudAndSun.png");
    //QDate date = QDate::currentDate();
    //QString date = data.
    //date = date.addDays(1);

    ui->setupUi(this);
    ui->day_image->setPixmap(pic_day);
    ui->evening_image->setPixmap(pic_evening);
    ui->morning_image->setPixmap(pic_morning);
    ui->night_image->setPixmap(pic_night);
    ui->temp_date->setText(data->getString_date());
    ui->City->setText(data->getLocate());

}

day_extend::~day_extend()
{
    QFile file("conf.txt");
    if (file.open(QIODevice::WriteOnly))
    {
        file.write(ui->City->text().toUtf8());
        file.close();
    }
    delete data;
    delete ui;
}


void day_extend::on_Setting_clicked()
{
    settings* setting = new settings(data);
    //setting->getData(data);
    setting->show();
    //ui->City->setText(data->getLocate());

}

void day_extend::on_ChangeFormat_clicked()
{
    week* type = new week();
    type->show();
    //ui->~Widget();
    day_extend::close();
}


void day_extend::on_Next_day_clicked()
{
    if(data->nextDate()){
        ui->temp_date->setText(data->getString_date());
        if(ui->Prev_day->isActiveWindow())
            ui->Prev_day->setEnabled(true);
    }
    else{
        ui->temp_date->setText(data->getString_date());
        ui->Next_day->setEnabled(false);
    }

}

void day_extend::on_Prev_day_clicked()
{
    if(data->prevDate()){
        ui->temp_date->setText(data->getString_date());
        if(ui->Next_day->isActiveWindow())
            ui->Next_day->setEnabled(true);
    }
    else{
        ui->temp_date->setText(data->getString_date());
        ui->Prev_day->setEnabled(false);
    }
    //data->prevDate();

    //ui->temp_date->setText(data->getString_date());
    //ui->Prev_day->setEnabled(false);
}



void day_extend::on_update_clicked()
{
    ui->day_image->setPixmap(pic_day);
    ui->evening_image->setPixmap(pic_evening);
    ui->morning_image->setPixmap(pic_morning);
    ui->night_image->setPixmap(pic_night);
    ui->temp_date->setText(data->getString_date());
    ui->City->setText(data->getLocate());
}
