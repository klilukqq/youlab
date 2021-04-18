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

    ui->setupUi(this);

    if(data->getUpperWindow())
        this->setWindowFlags(Qt::WindowStaysOnTopHint);

    ui->temp_date->setText(data->getString_date());

    int i = 0;
    for (;i < 45 ;i++ ) {
        if(data->getDateMass(i).toString(Qt::ISODate) == ui->temp_date->text()){
            break;
        }
    }

    ui->day_image->setPixmap(data->choosePic(data->getdayWeather(i)));
    ui->evening_image->setPixmap(data->choosePic(data->geteveningWeather(i)));
    ui->morning_image->setPixmap(data->choosePic(data->getmorningWeather(i)));
    ui->night_image->setPixmap(data->choosePic(data->getnightWeather(i)));


    ui->City->setText(data->getLocate());

//    QTextStream cout(stdout);
//    for (int i = 0; i< 45; i ++){
//        cout << data->Date[i].toString();

//        cout <<data->night[i] ;
//        cout <<data->morning[i];
//        cout <<data->day[i];
//        cout <<data->evening[i] ;

//        cout <<data->nightWeather[i] ;
//        cout <<data->morningWeather[i] ;
//        cout <<data->dayWeather[i];
//        cout <<data->eveningWeather[i];
//    }


    ui->day_deh->setText(QString::number(data->getday(i)));
    ui->day_weather_2->setText(data->getdayWeather(i));

    ui->night_deh->setText(QString::number(data->getnight(i)));
    ui->night_weather_2->setText(data->getnightWeather(i));

    ui->evening_deh->setText(QString::number(data->getevening(i)));
    ui->evening_weather_2->setText(data->geteveningWeather(i));

    ui->morning_deh->setText(QString::number(data->getmorning(i)));
    ui->morning_weather_2->setText(data->getmorningWeather(i));
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

    int i = 0;
    for (;i < 45 ;i++ ) {
        //возможно изменить формат
        if(data->getDateMass(i).toString(Qt::ISODate) == ui->temp_date->text()){

            break;
        }
    }

    ui->day_deh->setText(QString::number(data->getday(i)));
    ui->day_weather_2->setText(data->getdayWeather(i));

    ui->night_deh->setText(QString::number(data->getnight(i)));
    ui->night_weather_2->setText(data->getnightWeather(i));

    ui->evening_deh->setText(QString::number(data->getevening(i)));
    ui->evening_weather_2->setText(data->geteveningWeather(i));

    ui->morning_deh->setText(QString::number(data->getmorning(i)));
    ui->morning_weather_2->setText(data->getmorningWeather(i));


    ui->day_image->setPixmap(data->choosePic(data->getdayWeather(i)));
    ui->evening_image->setPixmap(data->choosePic(data->geteveningWeather(i)));
    ui->morning_image->setPixmap(data->choosePic(data->getmorningWeather(i)));
    ui->night_image->setPixmap(data->choosePic(data->getnightWeather(i)));

    //QImage resize
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
    QTextStream cout(stdout);
    int i = 0;
    for (;i < 45 ;i++ ) {
        //возможно изменить формат
        if(data->getDateMass(i).toString(Qt::ISODate) == ui->temp_date->text()){

            break;
        }
    }
    cout << i;

    ui->day_deh->setText(QString::number(data->getday(i)));
    ui->day_weather_2->setText(data->getdayWeather(i));

    ui->night_deh->setText(QString::number(data->getnight(i)));
    ui->night_weather_2->setText(data->getnightWeather(i));

    ui->evening_deh->setText(QString::number(data->getevening(i)));
    ui->evening_weather_2->setText(data->geteveningWeather(i));

    ui->morning_deh->setText(QString::number(data->getmorning(i)));
    ui->morning_weather_2->setText(data->getmorningWeather(i));

    ui->day_image->setPixmap(data->choosePic(data->getdayWeather(i)));
    ui->evening_image->setPixmap(data->choosePic(data->geteveningWeather(i)));
    ui->morning_image->setPixmap(data->choosePic(data->getmorningWeather(i)));
    ui->night_image->setPixmap(data->choosePic(data->getnightWeather(i)));
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

    this->setWindowFlags(this->windowFlags() & (~Qt::WindowStaysOnTopHint));
    if(data->getUpperWindow() == 0)
        this->setWindowFlag(Qt::WindowStaysOnTopHint,false);
    else
        this->setWindowFlags(Qt::WindowStaysOnTopHint);
    this->show();
    QTextStream cout(stdout);
    cout <<data->getUpperWindow();

    int i = 0;
    for (;i < 45 ;i++ ) {
        if(data->getDateMass(i).toString(Qt::ISODate) == ui->temp_date->text()){
            break;
        }
    }

    ui->day_image->setPixmap(data->choosePic(data->getdayWeather(i)));
    ui->evening_image->setPixmap(data->choosePic(data->geteveningWeather(i)));
    ui->morning_image->setPixmap(data->choosePic(data->getmorningWeather(i)));
    ui->night_image->setPixmap(data->choosePic(data->getnightWeather(i)));
    ui->temp_date->setText(data->getString_date());
    ui->City->setText(data->getLocate());
}
