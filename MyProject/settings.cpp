#include "settings.h"
#include "ui_settings.h"

settings::settings(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::settings)
{
    ui->setupUi(this);
}

settings::~settings()
{
    delete ui;
}

void settings::on_Setting_clicked()
{
    settings::close();
}