#ifndef GAMEPAD_H
#define GAMEPAD_H

#include <QObject>
#include <QTimer>
#include <QtGamepad/QGamepad>
#include <QDebug>
#include <QGamepadManager>
#include <QGamepadKeyNavigation>
#include "camera.h"
#include "myrobot.h"

class GamePad : public QObject
{
    Q_OBJECT
public:
    explicit GamePad(QObject *parent = 0);

private:
    Camera *camera;
    MyRobot *myRobot;
    double _buttonValue;
    double _axisValue;
    void checkButton(int button);
    void checkAxis(int axis);
};

#endif // GAMEPAD_H
