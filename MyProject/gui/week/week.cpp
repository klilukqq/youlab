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
        if(data->getDateMass(i).toString() == date.toString())
            break;
    }

    QPixmap* frame;

    ui->date_1->setText(date.toString(Qt::ISODate));
    frame = new QPixmap(data->choosePic(data->getdayWeather(i)));
    ui->frame_1->setPixmap(frame->scaled(61,51));
    ui->day_deg_1->setText(QString::number(data->getday(i)));
    ui->night_deg_1->setText(QString::number(data->getnight(i)));
    ui->weather_1->setText(data->getdayWeather(i));
    i++;

    date = date.addDays(1);
    ui->date_2->setText(date.toString(Qt::ISODate));
    frame = new QPixmap(data->choosePic(data->getdayWeather(i)));
    ui->frame_2->setPixmap(frame->scaled(61,51));
    ui->day_deg_2->setText(QString::number(data->getday(i)));
    ui->night_deg_2->setText(QString::number(data->getnight(i)));
    ui->weather_2->setText(data->getdayWeather(i));
    i++;

    date = date.addDays(1);
    ui->date_3->setText(date.toString(Qt::ISODate));
    frame = new QPixmap(data->choosePic(data->getdayWeather(i)));
    ui->frame_3->setPixmap(frame->scaled(61,51));
    ui->day_deg_3->setText(QString::number(data->getday(i)));
    ui->night_deg_3->setText(QString::number(data->getnight(i)));
    ui->weather_3->setText(data->getdayWeather(i));
    i++;

    date = date.addDays(1);
    ui->date_4->setText(date.toString(Qt::ISODate));
    frame = new QPixmap(data->choosePic(data->getdayWeather(i)));
    ui->frame_4->setPixmap(frame->scaled(61,51));
    ui->day_deg_4->setText(QString::number(data->getday(i)));
    ui->night_deg_4->setText(QString::number(data->getnight(i)));
    ui->weather_4->setText(data->getdayWeather(i));
    i++;

    date = date.addDays(1);
    ui->date_5->setText(date.toString(Qt::ISODate));
    frame = new QPixmap(data->choosePic(data->getdayWeather(i)));
    ui->frame_5->setPixmap(frame->scaled(61,51));
    ui->day_deg_5->setText(QString::number(data->getday(i)));
    ui->night_deg_5->setText(QString::number(data->getnight(i)));
    ui->weather_5->setText(data->getdayWeather(i));
    i++;

    date = date.addDays(1);
    ui->date_6->setText(date.toString(Qt::ISODate));
    frame = new QPixmap(data->choosePic(data->getdayWeather(i)));
    ui->frame_6->setPixmap(frame->scaled(61,51));
    ui->day_deg_6->setText(QString::number(data->getday(i)));
    ui->night_deg_6->setText(QString::number(data->getnight(i)));
    ui->weather_6->setText(data->getdayWeather(i));
    i++;

    date = date.addDays(1);
    ui->date_7->setText(date.toString(Qt::ISODate));
    frame = new QPixmap(data->choosePic(data->getdayWeather(i)));
    ui->frame_7->setPixmap(frame->scaled(61,51));
    ui->day_deg_7->setText(QString::number(data->getday(i)));
    ui->night_deg_7->setText(QString::number(data->getnight(i)));
    ui->weather_7->setText(data->getdayWeather(i));

    delete frame;
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
