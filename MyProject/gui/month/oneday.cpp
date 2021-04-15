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

void oneDay::setTemp(int temp1, int temp2)
{
    ui->deqrMothDay->setText(QString::number(temp1));
    ui->DeqrNightMonht->setText(QString::number(temp2));
}
void oneDay::setPic(QString namePic){
    ui->FrameMonth->setPixmap(namePic);
}

oneDay::~oneDay()
{
    delete ui;
}
