#ifndef MYROBOT_H
#define MYROBOT_H

#include <QObject>
#include <QTcpSocket>
#include <QAbstractSocket>
#include <QDebug>
#include <QTimer>
#include <QMutex>
#include <QKeyEvent>

class MyRobot : public QObject {
    Q_OBJECT
public:
    explicit MyRobot(QObject *parent = 0);
    void doConnect();
    void disConnect();
    QByteArray DataToSend;
    QByteArray DataReceived;
    QMutex Mutex;
    void goForward();
    void goBackward();
    void goRightside();
    void goLeftside();
    void stop();
    void setSpeed(int speed);
    double getDistanceReceived();
    int getBatteryReceived();
    int get_ir_AvG();
    int get_ir_ArG();
    int get_ir_AvD();
    int get_ir_ArD();


signals:
    void updateUI(const QByteArray Data);
public slots:
    void connected();
    void disconnected();
    void bytesWritten(qint64 bytes);
    void readyRead();
    void MyTimerSlot();
    void speed();
    int getstatus();

private:
    QTcpSocket *socket;
    QTimer *TimerEnvoi;
    int _speed;
    double distanceReceived;
    double previous_ticsR;
    double previous_ticsL;
    int status;
};

#endif // MYROBOT_H
