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
    connect(TimerReceiveIR, &QTimer::timeout, this, &MainWindow::display_irAvG);
    connect(TimerReceiveIR, &QTimer::timeout, this, &MainWindow::display_irArG);
    connect(TimerReceiveIR, &QTimer::timeout, this, &MainWindow::display_irAvD);
    connect(TimerReceiveIR, &QTimer::timeout, this, &MainWindow::display_irArD);
    TimerReceiveIR->start(100);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_connection_clicked()
{
    if(ui->connection->text() == "Connect") {
        myRobot->doConnect();
        ui->connection->setText("Disconnect");
        ui->connection->setStyleSheet ( "background-color:red;" );
    } else {
        myRobot->disConnect();
        ui->connection->setText("Connect");
        ui->connection->setStyleSheet ( "background-color:rgb(0, 255, 0);" );
    }
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

void MainWindow::keyReleaseEvent(QKeyEvent *event) {
    int code = event->key();
    switch(code)
    {
    case Qt::Key_W:
        myRobot->stop();
        break;
    case Qt::Key_Z:
        myRobot->stop();
        break;
    case Qt::Key_S:
        myRobot->stop();
        break;
    case Qt::Key_A:
        myRobot->stop();
        break;
    case Qt::Key_Q:
        myRobot->stop();
        break;
    case Qt::Key_D:
        myRobot->stop();
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

void MainWindow::display_irAvG()
{
    int ir=myRobot->get_ir_AvG();
    ui->ir_AvG->display(ir);
}

void MainWindow::display_irArG()
{
    int ir=myRobot->get_ir_ArG();
    ui->ir_ArG->display(ir);
}

void MainWindow::display_irArD()
{
    int ir=myRobot->get_ir_AvD();
    ui->ir_ArD->display(ir);
}

void MainWindow::display_irAvD()
{
    int ir=myRobot->get_ir_AvD();
    ui->ir_AvD->display(ir);
    //ui->ir_AvD->setStyleSheet("color:rgb(255,0,0)");
}

void MainWindow::on_arret_clicked()
{
    myRobot->stop();
}

