#include "week.h"
#include "gui/month/month.h"

week::week(dataHandler* data, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::week)

{
    //delete parent;
    this->data = data;
    ui->setupUi(this);

    //this->setGeometry(parent->geometry());
    //ui->City->setText(data->getLocate());

    if(data->getUpperWindow())
        this->setWindowFlags(Qt::WindowStaysOnTopHint);

    ui->City->setText(data->getLocate());

    QDate date = QDate::currentDate().addDays(-1);

    int i = 0;
    for (;i < 45 ;i++ ) {
        //возможно изменить формат
        if(data->Date[i].toString() == date.toString())
            break;
    }

    ui->date_1->setText(date.toString(Qt::ISODate));
    ui->frame_1->setPixmap(data->choosePic(data->dayWeather[i]));
    ui->day_deg_1->setText(QString::number(data->day[i]));
    ui->night_deg_1->setText(QString::number(data->night[i]));
    ui->weather_1->setText(data->dayWeather[i]);
    i++;

    date = date.addDays(1);
    ui->date_2->setText(date.toString(Qt::ISODate));
    ui->frame_2->setPixmap(data->choosePic(data->dayWeather[i]));
    ui->day_deg_2->setText(QString::number(data->day[i]));
    ui->night_deg_2->setText(QString::number(data->night[i]));
    ui->weather_2->setText(data->dayWeather[i]);
    i++;

    date = date.addDays(1);
    ui->date_3->setText(date.toString(Qt::ISODate));
    ui->frame_3->setPixmap(data->choosePic(data->dayWeather[i]));
    ui->day_deg_3->setText(QString::number(data->day[i]));
    ui->night_deg_3->setText(QString::number(data->night[i]));
    ui->weather_3->setText(data->dayWeather[i]);
    i++;

    date = date.addDays(1);
    ui->date_4->setText(date.toString(Qt::ISODate));
    ui->frame_4->setPixmap(data->choosePic(data->dayWeather[i]));
    ui->day_deg_4->setText(QString::number(data->day[i]));
    ui->night_deg_4->setText(QString::number(data->night[i]));
    ui->weather_4->setText(data->dayWeather[i]);
    i++;

    date = date.addDays(1);
    ui->date_5->setText(date.toString(Qt::ISODate));
    ui->frame_5->setPixmap(data->choosePic(data->dayWeather[i]));
    ui->day_deg_5->setText(QString::number(data->day[i]));
    ui->night_deg_5->setText(QString::number(data->night[i]));
    ui->weather_5->setText(data->dayWeather[i]);
    i++;

    date = date.addDays(1);
    ui->date_6->setText(date.toString(Qt::ISODate));
    ui->frame_6->setPixmap(data->choosePic(data->dayWeather[i]));
    ui->day_deg_6->setText(QString::number(data->day[i]));
    ui->night_deg_6->setText(QString::number(data->night[i]));
    ui->weather_6->setText(data->dayWeather[i]);
    i++;

    date = date.addDays(1);
    ui->date_7->setText(date.toString(Qt::ISODate));
    ui->frame_7->setPixmap(data->choosePic(data->dayWeather[i]));
    ui->day_deg_7->setText(QString::number(data->day[i]));
    ui->night_deg_7->setText(QString::number(data->night[i]));
    ui->weather_7->setText(data->dayWeather[i]);

}

week::~week()
{
    delete data;
    delete ui;
}

void week::on_Setting_clicked()
{
    settings* setting = new settings(data);
    setting->setGeometry(this->geometry().x(),this->geometry().y(),this->geometry().width()\
                          ,this->geometry().height());
    QObject::connect(setting,&settings::signalFromButton,this,&week::update);
    setting->show();
    setting->activateWindow();

}

void week::on_ChangeFormat_clicked()
{
    week::close();
    month* type = new month(data);
    type->setGeometry(this->geometry());
    type->show();
}

void week::update()
{
    this->setWindowFlags(Qt::WindowStaysOnTopHint);
    if(data->getUpperWindow() == 0)
        this->setWindowFlags(this->windowFlags() & (~Qt::WindowStaysOnTopHint));
    this->show();
    ui->City->setText(data->getLocate());
}

//как закрывать приложение
