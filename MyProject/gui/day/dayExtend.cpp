#include "dayExtend.h"
#include "ui_dayExtend.h"
#include "gui/month/month.h"

#include <QTextStream>

dayExtend::dayExtend(dataHandler* data,QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    //this->setGeometry(parent->geometry());
    //this->setGeometry(parent->geometry());
    this->data = data;
    //data->setLimit(3);

    pic_day.load("../image/Weather_Sun.png");
    pic_night.load("../image/Weather_Cloud.png");
    pic_evening.load("../image/Weather_CloudAndSun.png");
    pic_morning.load("../image/Weather_CloudAndSun.png");

    ui->setupUi(this);

    if(data->getUpperWindow())
        this->setWindowFlags(Qt::WindowStaysOnTopHint);

    ui->day_image->setPixmap(pic_day);
    ui->evening_image->setPixmap(pic_evening);
    ui->morning_image->setPixmap(pic_morning);
    ui->night_image->setPixmap(pic_night);
    ui->temp_date->setText(data->getString_date());
    ui->City->setText(data->getLocate());

}

dayExtend::~dayExtend()
{
    QTextStream cout(stdout);
    cout <<"23";
    delete data;
    delete ui;
}


void dayExtend::on_Setting_clicked()
{
    settings* setting = new settings(data);
    //setting->getData(data);
   // setting->ui
    setting->setGeometry(this->geometry().x(),this->geometry().y(),this->geometry().width()\
                          ,this->geometry().height());
    QObject::connect(setting,&settings::signalFromButton,this,&dayExtend::update);
    setting->show();
    setting->activateWindow();
    //ui->City->setText(data->getLocate());
}

void dayExtend::on_ChangeFormat_clicked()
{

    dayExtend::close();
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

void dayExtend::prevFormat()
{
    month* type = new month(data);
    type->show();
}

void dayExtend::nextFormat()
{
    week* type = new week(data);
    type->show();
}



void dayExtend::update()
{
    //Починить на линуксе, экран опускается
    this->setWindowFlags(this->windowFlags() & (~Qt::WindowStaysOnTopHint));
    //this->setWindowFlags(Qt::WindowStaysOnTopHint);
    if(data->getUpperWindow() == 0)
        //this->setWindowFlags(this->windowFlags() & (~Qt::WindowStaysOnTopHint));
        this->setWindowFlag(Qt::WindowStaysOnTopHint,false);
    else
        this->setWindowFlags(Qt::WindowStaysOnTopHint);
    this->show();
    QTextStream cout(stdout);
    cout <<data->getUpperWindow();

    ui->day_image->setPixmap(pic_day);
    ui->evening_image->setPixmap(pic_evening);
    ui->morning_image->setPixmap(pic_morning);
    ui->night_image->setPixmap(pic_night);
    ui->temp_date->setText(data->getString_date());
    ui->City->setText(data->getLocate());
}
