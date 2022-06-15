#include "gamepad.h"

/*
 * Constructor
 */
GamePad::GamePad(QObject *parent)
    : QObject{parent}
{
    speed=0;
    camera = new Camera;
    myRobot = new MyRobot;

    /*
     * Button pressed event
     */
    connect(QGamepadManager::instance(), &QGamepadManager::gamepadButtonPressEvent, this, [this](int deviceId, QGamepadManager::GamepadButton button, double value) {
        _buttonValue = value;
        checkButton(button);
        qDebug() << button << " pressed, value : "<<value;
    });

    /*
     * Button released event
     */
    connect(QGamepadManager::instance(), &QGamepadManager::gamepadButtonReleaseEvent, this, [this](int deviceId, QGamepadManager::GamepadButton button) {
        _buttonValue = 0;
        checkButton(button);
        //qDebug() << button << " released";
    });

    /*
     * Axis moved event
     */
    connect(QGamepadManager::instance(), &QGamepadManager::gamepadAxisEvent, this, [this](int deviceId, QGamepadManager::GamepadAxis axis, double value) {
        _axisValue = value;
        checkAxis(axis);
        qDebug() << axis << " moved " << value;
    });
}

/*
 * Checks if a button is pressed or released
 */
void GamePad::checkButton(int button) {
    switch(button) {
    case 0:
        if(_buttonValue == 1)
            camera->moveDown();
        break;
    case 1:
        if(_buttonValue == 1)
            camera->moveRight();
        break;
    case 2:
        if(_buttonValue == 1)
            camera->moveLeft();
        break;
    case 3:
        if(_buttonValue == 1)
            camera->moveUp();
        break;
    case 7:
        speed=_buttonValue * 240;
        myRobot->setSpeed(int(speed));
        break;
    case 12:
        if(_buttonValue == 1)
            myRobot->goForward();
        else
            myRobot->stop();
        break;
    case 13:
        if(_buttonValue==1)
            myRobot->goBackward();
        else
            myRobot->stop();
        break;
    case 14:
        if(_buttonValue==1)
            myRobot->goRightside();
        else
            myRobot->stop();
        break;
    case 15:
        if(_buttonValue==1)
            myRobot->goLeftside();
        else
            myRobot->stop();
        break;
    }
}

/*
 * Checks if an axis has moved
 */
void GamePad::checkAxis(int axis) {
    switch(axis) {
    case 0:
        if(_axisValue<0)
            myRobot->goForward();
        else if (_axisValue>0)
            myRobot->goBackward();
        else
            myRobot->stop();
        break;
    case 1:
        if(_axisValue<0)
            myRobot->goLeftside();
        else if (_axisValue>0)
            myRobot->goRightside();
        else
            myRobot->stop();
        break;
        break;
    case 2:
        if(_axisValue<0)
            camera->moveLeft();
        else if (_axisValue>0)
            camera->moveRight();
        break;
    case 3:
        if(_axisValue < 0)
            camera->moveUp();
        else if(_axisValue > 0)
            camera->moveDown();
        break;
    }
}
