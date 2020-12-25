#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QColorDialog>
#include<QPushButton>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setFixedSize(190,64);
    this->setWindowTitle("Color");
    connect(ui->pushButton,&QPushButton::clicked,[=](){
        QColorDialog::getColor();
    });

}

MainWindow::~MainWindow()
{
    delete ui;
}
