#include "dayExtend.h"
#include "ui_dayExtend.h"


dayExtend::dayExtend(dataHandler* data,QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    //this->setGeometry(parent->geometry());
    //this->setGeometry(parent->geometry());
    this->data = data;
    //data->setLimit(3);

    QFile file;

    if(data->getSystem() == "Windows"){
        pic_day.load("..\\image\\Weather_Sun.png");
        pic_night.load("..\\image\\Weather_Cloud.png");
        pic_evening.load("..\\image\\Weather_CloudAndSun.png");
        pic_morning.load("..\\image\\Weather_CloudAndSun.png");
        file.setFileName("..\\conf.txt");
    }
    else if(data->getSystem() == "Linux"){
        pic_day.load("../image/Weather_Sun.png");
        pic_night.load("../image/Weather_Cloud.png");
        pic_evening.load("../image/Weather_CloudAndSun.png");
        pic_morning.load("../image/Weather_CloudAndSun.png");
        file.setFileName("../conf.txt");;
    }


    if ((file.exists())&&(file.open(QIODevice::ReadOnly)))
    {
        data->setLocate(file.readAll());
        file.close();
    }

    ui->setupUi(this);

    ui->day_image->setPixmap(pic_day);
    ui->evening_image->setPixmap(pic_evening);
    ui->morning_image->setPixmap(pic_morning);
    ui->night_image->setPixmap(pic_night);
    ui->temp_date->setText(data->getString_date());
    ui->City->setText(data->getLocate());

}

dayExtend::~dayExtend()
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


void dayExtend::on_Setting_clicked()
{
    settings* setting = new settings(data);
    //setting->getData(data);
    setting->setGeometry(this->geometry().x(),this->geometry().y(),this->geometry().width()\
                          ,this->geometry().height());
    setting->show();
    //ui->City->setText(data->getLocate());
}

void dayExtend::on_ChangeFormat_clicked()
{

    dayExtend::close();
    QFile file("conf.txt");
    if (file.open(QIODevice::WriteOnly))
    {
        file.write(ui->City->text().toUtf8());
        file.close();
    }
    week* type = new week(data);
    type->setGeometry(this->geometry());
    type->show();
}


void dayExtend::on_Next_day_clicked()
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

void dayExtend::on_Prev_day_clicked()
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



void dayExtend::on_update_clicked()
{
    ui->day_image->setPixmap(pic_day);
    ui->evening_image->setPixmap(pic_evening);
    ui->morning_image->setPixmap(pic_morning);
    ui->night_image->setPixmap(pic_night);
    ui->temp_date->setText(data->getString_date());
    ui->City->setText(data->getLocate());
}
