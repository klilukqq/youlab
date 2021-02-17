#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <QString>;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    std::cout << "b";
}

void MainWindow::on_pushButton_2_clicked()
{
    std::cout << "c";
    MainWindow w;
    w.show();
}

void MainWindow::on_radioButton_clicked(bool checked)
{
if (checked == 1)
    std::cout << "a";
}

void MainWindow::on_mdiArea_windowIconTextChanged(const QString &iconText)
{
    MainWindow w;
    w.show();
}
