#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    myRobot = new MyRobot;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_connection_clicked()
{
    myRobot->doConnect();
}


void MainWindow::on_disconnection_clicked()
{
    myRobot->setSpeed();
}

