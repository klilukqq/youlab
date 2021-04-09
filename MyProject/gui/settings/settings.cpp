#include "settings.h"
#include "ui_settings.h"

#include <QTextStream>

//#include <QGeoRoute>


settings::settings(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::settings)
{
    ui->setupUi(this);

}

settings::settings(dataHandler* data,QWidget *parent):
    QWidget(parent),
    ui(new Ui::settings)
{
    ui->setupUi(this);
    //ui->format_combo->set
    this->setWindowTitle("Настройки");

    this->data = data;

    ui->text_locator->setText(data->getLocate());
    this->ui->format_combo->setCurrentIndex(data->getTempStartFormat());
    this->ui->setting_upper_window->setCheckState(data->getUpperWindow() == 1?Qt::Checked:Qt::Unchecked);

//    PrevLocation = data->getLocate();
//    prevCombo = data->getTempStartFormat();
//    prevWindowParam = data->getUpperWindow();

    this->setWindowFlags(Qt::WindowStaysOnTopHint);
    this->activateWindow();
}
//Qt::Checked
settings::~settings()
{
//    data->setLocate(ui->text_locator->text());
//    data->setTempStartFormat(ui->format_combo->currentIndex());
    data->setUpperWindow(ui->setting_upper_window->isChecked());
    delete ui;
}


dataHandler* settings::getData(dataHandler* data){
    return data;
}

void settings::on_gps_locator_clicked()
{
    //QGeoRoute my_place;
    //my_place.path();
    //ui->text_locator->setText(my_place.routeId());
}



void settings::on_SettingOK_clicked()
{
    data->setLocate(ui->text_locator->text());
    data->setTempStartFormat(ui->format_combo->currentIndex());
    data->setUpperWindow(ui->setting_upper_window->isChecked());
    settings::close();
    emit signalFromButton();
    //this->set;
    delete this;
}

void settings::on_SettingApply_clicked()
{
    data->setLocate(ui->text_locator->text());
    data->setTempStartFormat(ui->format_combo->currentIndex());
    data->setUpperWindow(ui->setting_upper_window->isChecked());

    QTextStream cout(stdout);
    cout <<ui->setting_upper_window->isChecked();

    emit signalFromButton();
    this->raise();
    applayed = true;

}

void settings::on_SettingCancel_clicked()
{   if(applayed == false){
        ui->text_locator->setText(data->getLocate());
        this->ui->format_combo->setCurrentIndex(data->getTempStartFormat());
        this->ui->setting_upper_window->setCheckState(data->getUpperWindow() == 1?Qt::Checked:Qt::Unchecked);
        data->setLocate(PrevLocation);
        emit signalFromButton();
        this->raise();
    }
    else{
        settings::close();
        delete this;
    }
}
