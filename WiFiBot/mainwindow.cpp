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
    myRobot->disConnect();
}


void MainWindow::on_avancer_clicked()
{
    myRobot->goForward();
}


void MainWindow::on_speed_valueChanged(double speed)
{
    myRobot->setSpeed(speed);
}


void MainWindow::on_reculer_clicked()
{
    myRobot->goBackward();
}


void MainWindow::on_gauche_clicked()
{
    myRobot->goLeftside();
}


void MainWindow::on_droite_clicked()
{
    myRobot->goRightside();
}

