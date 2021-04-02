#include "oneday.h"
#include "ui_oneday.h"

oneDay::oneDay(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::oneDay)
{
    ui->setupUi(this);
}

void oneDay::setDate(QString date){
    ui->dateMonth->setText(date);
}

oneDay::~oneDay()
{
    delete ui;
}
