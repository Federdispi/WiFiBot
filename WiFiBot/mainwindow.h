#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "myrobot.h"
#include <QMainWindow>
#include <QWebEngineView>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:



    void on_connection_clicked();

    void on_avancer_clicked();

    void on_speed_valueChanged(double speed);

    void on_reculer_clicked();

    void on_gauche_clicked();

    void on_droite_clicked();

    void on_arret_clicked();

private:
    Ui::MainWindow *ui;
    MyRobot *myRobot;
    QTimer *TimerReceive;
    QTimer *TimerReceiveIR;
    void webcam();
    void display_speed();
    void display_battery();
    void display_irAvG();
    void display_irArG();
    void display_irAvD();
    void display_irArD();

protected:
    void keyPressEvent(QKeyEvent *event);
    void keyReleaseEvent(QKeyEvent *event);
};
#endif // MAINWINDOW_H
