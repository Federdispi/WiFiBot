#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QTimer>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    myRobot = new MyRobot;
    TimerReceive = new QTimer(this);
    connect(TimerReceive, &QTimer::timeout, this, &MainWindow::display_speed);
    TimerReceive->start(1000);
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

void MainWindow::keyPressEvent(QKeyEvent *event) {
    int code = event->key();
    switch(code)
    {
    case Qt::Key_W:
        myRobot->goForward();
        break;
    case Qt::Key_Z:
        myRobot->goForward();
        break;
    case Qt::Key_S:
        myRobot->goBackward();
        break;
    case Qt::Key_A:
        myRobot->goLeftside();
        break;
    case Qt::Key_Q:
        myRobot->goLeftside();
        break;
    case Qt::Key_D:
        myRobot->goRightside();
        break;
    }
}

void MainWindow::display_speed()
{
    int distance = myRobot->getDistanceReceived();
    int speed = distance * 3.6;
    ui->speed_received->display(speed);
}

