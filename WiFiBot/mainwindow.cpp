#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    myRobot = new MyRobot;
    webcam();
    TimerReceive = new QTimer(this);
    TimerReceiveIR=new QTimer(this);
    connect(TimerReceive, &QTimer::timeout, this, &MainWindow::display_speed);
    connect(TimerReceive, &QTimer::timeout, this, &MainWindow::display_battery);
    TimerReceive->start(1000);
    connect(TimerReceiveIR, &QTimer::timeout, this, &MainWindow::display_irG);
    connect(TimerReceiveIR, &QTimer::timeout, this, &MainWindow::display_irD);
    TimerReceiveIR->start(100);
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

void MainWindow::webcam() {
    QWebEngineView *qWebEngineView = new QWebEngineView(ui->frame);
    qWebEngineView->load(QUrl("http://192.168.1.106:8080/?action=stream"));
    qWebEngineView->show();
    qWebEngineView->resize(481,321);
    qWebEngineView->setContentsMargins(0,0,0,0);
}

void MainWindow::display_speed()
{
    int distance = myRobot->getDistanceReceived();
    int speed = distance * 3.6;
    ui->speed_received->display(speed);
}


void MainWindow::display_battery()
{
    int battery=myRobot->getBatteryReceived();
    ui->battery->setValue(battery);
}

void MainWindow::display_irG()
{
    int ir=myRobot->get_ir_G();
    ui->ir_G->display(ir);
}

void MainWindow::display_irD()
{
    int ir=myRobot->get_ir_D();
    ui->ir_D->display(ir);
}
