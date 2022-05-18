// myrobot.cpp

#include "myrobot.h"

MyRobot::MyRobot(QObject *parent) : QObject(parent) {
    _speed = 0;
    DataToSend.resize(9);
    DataToSend[0] = 0xFF;
    DataToSend[1] = 0x07;
    DataToSend[2] = 0x0;
    DataToSend[3] = 0x0;
    DataToSend[4] = 0x0;
    DataToSend[5] = 0x0;
    DataToSend[6] = 0x0;
    DataToSend[7] = 0x0;
    DataToSend[8] = 0x0;
    DataReceived.resize(21);
    TimerEnvoi = new QTimer();
    // setup signal and slot
    connect(TimerEnvoi, SIGNAL(timeout()), this, SLOT(MyTimerSlot())); //Send data to wifibot timer
}


void MyRobot::doConnect() {
    socket = new QTcpSocket(this); // socket creation
    connect(socket, SIGNAL(connected()),this, SLOT(connected()));
    connect(socket, SIGNAL(disconnected()),this, SLOT(disconnected()));
    connect(socket, SIGNAL(bytesWritten(qint64)),this, SLOT(bytesWritten(qint64)));
    connect(socket, SIGNAL(readyRead()),this, SLOT(readyRead()));
    qDebug() << "connecting..."; // this is not blocking call
    //socket->connectToHost("LOCALHOST", 15020);
    socket->connectToHost("192.168.1.106", 15020); // connection to wifibot
    // we need to wait...
    if(!socket->waitForConnected(5000)) {
        qDebug() << "Error: " << socket->errorString();
        return;
    }
    TimerEnvoi->start(75);

}

void MyRobot::disConnect() {
    TimerEnvoi->stop();
    socket->close();
}

void MyRobot::speed() {
    qDebug() << "Speed setted on 120...";
}

void MyRobot::connected() {
    qDebug() << "connected..."; // Hey server, tell me about you.
}

void MyRobot::disconnected() {
    qDebug() << "disconnected...";
}

void MyRobot::bytesWritten(qint64 bytes) {
    qDebug() << bytes << " bytes written...";
}

void MyRobot::readyRead() {
    qDebug() << "reading..."; // read the data from the socket
    DataReceived = socket->readAll();
    emit updateUI(DataReceived);
    qDebug() << DataReceived[0] << DataReceived[1] << DataReceived[2];
}

void MyRobot::MyTimerSlot() {
    qDebug() << "Timer...";
    while(Mutex.tryLock());
    socket->write(DataToSend);
    Mutex.unlock();
}

short Crc16(QByteArray Adresse_tab, unsigned char Taille_max) {
    unsigned int Crc = 0xFFFF;
    unsigned int Polynome = 0xA001;
    unsigned int CptOctet = 0;
    unsigned int CptBit = 0;
    unsigned int Parity = 0;

    Crc = 0XFFFF;
    Polynome = 0xA001;
    for(CptOctet = 1; CptOctet < Taille_max; CptOctet++) {
        Crc ^= Adresse_tab[CptOctet];
        for(CptBit = 0; CptBit <= 7; CptBit ++) {
            Parity = Crc;
            Crc >>= 1;
            if(Parity%2 == true) Crc ^= Polynome;
        }
    }
    return Crc;
}

void MyRobot::setSpeed(int speed) {
    _speed = speed;
}

void MyRobot::goForward() {
    DataToSend[0] = 0xFF;
    DataToSend[1] = 0x07;
    if(_speed > 120) {
        DataToSend[2] = 120;
        DataToSend[3] = _speed - 120;
        DataToSend[4] = 120;
        DataToSend[5] = _speed - 120;
    } else {
        DataToSend[2] = _speed;
        DataToSend[3] = 0;
        DataToSend[4] = _speed;
        DataToSend[5] = 0;
    }
    DataToSend[6] = 80;
    short crc = Crc16(DataToSend, 7);
    DataToSend[7] = crc;
    DataToSend[8] = (crc >> 8);
}

void MyRobot::goBackward() {
    DataToSend[0] = 0xFF;
    DataToSend[1] = 0x07;
    if(_speed > 120) {
        DataToSend[2] = 120;
        DataToSend[3] = _speed - 120;
        DataToSend[4] = 120;
        DataToSend[5] = _speed - 120;
    } else {
        DataToSend[2] = _speed;
        DataToSend[3] = 0;
        DataToSend[4] = _speed;
        DataToSend[5] = 0;
    }
    DataToSend[6] = 0;
    short crc = Crc16(DataToSend, 7);
    DataToSend[7] = crc;
    DataToSend[8] = (crc >> 8);
}

void MyRobot::goRightside() {
    DataToSend[0] = 0xFF;
    DataToSend[1] = 0x07;
    if(_speed > 120) {
        DataToSend[2] = 120;
        DataToSend[3] = _speed - 120;
        DataToSend[4] = 120;
        DataToSend[5] = _speed - 120;
    } else {
        DataToSend[2] = _speed;
        DataToSend[3] = 0;
        DataToSend[4] = _speed;
        DataToSend[5] = 0;
    }
    DataToSend[6] = 64;
    short crc = Crc16(DataToSend, 7);
    DataToSend[7] = crc;
    DataToSend[8] = (crc >> 8);
}

void MyRobot::goLeftside() {
    DataToSend[0] = 0xFF;
    DataToSend[1] = 0x07;
    if(_speed > 120) {
        DataToSend[2] = 120;
        DataToSend[3] = _speed - 120;
        DataToSend[4] = 120;
        DataToSend[5] = _speed - 120;
    } else {
        DataToSend[2] = _speed;
        DataToSend[3] = 0;
        DataToSend[4] = _speed;
        DataToSend[5] = 0;
    }
    DataToSend[6] = 16;
    short crc = Crc16(DataToSend, 7);
    DataToSend[7] = crc;
    DataToSend[8] = (crc >> 8);
}

void MyRobot::keyPressEvent(QKeyEvent *event) {
    if(event->key() == Qt::Key_W)
        goForward();
}
