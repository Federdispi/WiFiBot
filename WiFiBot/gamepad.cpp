#include "gamepad.h"

/*
 * Constructor
 */
GamePad::GamePad(QObject *parent)
    : QObject{parent}
{
    camera = new Camera;
    myRobot = new MyRobot;
    connect(QGamepadManager::instance(), &QGamepadManager::gamepadButtonPressEvent, this, [this](int deviceId, QGamepadManager::GamepadButton button, double value) {
        _buttonValue = value;
        checkButton(button);
        //qDebug() << button << " pressed";
    });

    connect(QGamepadManager::instance(), &QGamepadManager::gamepadButtonReleaseEvent, this, [this](int deviceId, QGamepadManager::GamepadButton button) {
        _buttonValue = 0;
        checkButton(button);
        //qDebug() << button << " released";
    });

    connect(QGamepadManager::instance(), &QGamepadManager::gamepadAxisEvent, this, [this](int deviceId, QGamepadManager::GamepadAxis axis, double value) {
        _axisValue = value;
        checkAxis(axis);
        //qDebug() << axis << " moved " << value;
    });
}

void GamePad::checkButton(int button) {
    switch(button) {
    case 12:
        if(_buttonValue == 1)
            myRobot->goForward();
        else
            myRobot->stop();
        break;
    }
}

void GamePad::checkAxis(int axis) {
    switch(axis) {
    case 2:
        if(_axisValue < 0)
            camera->moveUp();
        else if(_axisValue > 0)
            camera->moveDown();
        break;
    }
}
