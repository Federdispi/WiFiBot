/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *connection;
    QFrame *frame;
    QGroupBox *affichage_robot;
    QDoubleSpinBox *speed;
    QLCDNumber *speed_received;
    QProgressBar *battery;
    QLCDNumber *ir_AvD;
    QLCDNumber *ir_AvG;
    QLCDNumber *ir_ArG;
    QLCDNumber *ir_ArD;
    QGroupBox *controle_robot;
    QPushButton *reculer;
    QPushButton *droite;
    QPushButton *gauche;
    QPushButton *avancer;
    QPushButton *arret;
    QGroupBox *controle_robot_2;
    QPushButton *baisser;
    QPushButton *droite_camera;
    QPushButton *gauche_camera;
    QPushButton *lever;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(972, 781);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        connection = new QPushButton(centralwidget);
        connection->setObjectName(QString::fromUtf8("connection"));
        connection->setGeometry(QRect(0, 0, 161, 81));
        connection->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 0);"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(240, 40, 491, 371));
        frame->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(0, 0, 0, 255), stop:0.19397 rgba(0, 0, 0, 255), stop:0.202312 rgba(122, 97, 0, 255), stop:0.495514 rgba(76, 58, 0, 255), stop:0.504819 rgba(255, 255, 255, 255), stop:0.79 rgba(255, 255, 255, 255), stop:1 rgba(255, 158, 158, 255));"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        affichage_robot = new QGroupBox(centralwidget);
        affichage_robot->setObjectName(QString::fromUtf8("affichage_robot"));
        affichage_robot->setGeometry(QRect(760, 0, 211, 401));
        speed = new QDoubleSpinBox(affichage_robot);
        speed->setObjectName(QString::fromUtf8("speed"));
        speed->setGeometry(QRect(10, 60, 181, 91));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(speed->sizePolicy().hasHeightForWidth());
        speed->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("Tw Cen MT Condensed Extra Bold"));
        font.setPointSize(36);
        speed->setFont(font);
        speed->setDecimals(0);
        speed->setMaximum(240.000000000000000);
        speed->setSingleStep(10.000000000000000);
        speed_received = new QLCDNumber(affichage_robot);
        speed_received->setObjectName(QString::fromUtf8("speed_received"));
        speed_received->setGeometry(QRect(10, 160, 91, 61));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(speed_received->sizePolicy().hasHeightForWidth());
        speed_received->setSizePolicy(sizePolicy1);
        speed_received->setFont(font);
        speed_received->setFocusPolicy(Qt::NoFocus);
        speed_received->setLayoutDirection(Qt::LeftToRight);
        speed_received->setLineWidth(5);
        battery = new QProgressBar(affichage_robot);
        battery->setObjectName(QString::fromUtf8("battery"));
        battery->setGeometry(QRect(10, 30, 118, 23));
        battery->setValue(24);
        ir_AvD = new QLCDNumber(affichage_robot);
        ir_AvD->setObjectName(QString::fromUtf8("ir_AvD"));
        ir_AvD->setGeometry(QRect(110, 270, 91, 61));
        sizePolicy1.setHeightForWidth(ir_AvD->sizePolicy().hasHeightForWidth());
        ir_AvD->setSizePolicy(sizePolicy1);
        ir_AvD->setFont(font);
        ir_AvD->setFocusPolicy(Qt::NoFocus);
        ir_AvD->setLayoutDirection(Qt::LeftToRight);
        ir_AvD->setLineWidth(5);
        ir_AvG = new QLCDNumber(affichage_robot);
        ir_AvG->setObjectName(QString::fromUtf8("ir_AvG"));
        ir_AvG->setGeometry(QRect(10, 270, 91, 61));
        sizePolicy1.setHeightForWidth(ir_AvG->sizePolicy().hasHeightForWidth());
        ir_AvG->setSizePolicy(sizePolicy1);
        ir_AvG->setFont(font);
        ir_AvG->setFocusPolicy(Qt::NoFocus);
        ir_AvG->setLayoutDirection(Qt::LeftToRight);
        ir_AvG->setLineWidth(5);
        ir_ArG = new QLCDNumber(affichage_robot);
        ir_ArG->setObjectName(QString::fromUtf8("ir_ArG"));
        ir_ArG->setGeometry(QRect(10, 340, 91, 61));
        sizePolicy1.setHeightForWidth(ir_ArG->sizePolicy().hasHeightForWidth());
        ir_ArG->setSizePolicy(sizePolicy1);
        ir_ArG->setFont(font);
        ir_ArG->setFocusPolicy(Qt::NoFocus);
        ir_ArG->setLayoutDirection(Qt::LeftToRight);
        ir_ArG->setLineWidth(5);
        ir_ArD = new QLCDNumber(affichage_robot);
        ir_ArD->setObjectName(QString::fromUtf8("ir_ArD"));
        ir_ArD->setGeometry(QRect(110, 340, 91, 61));
        sizePolicy1.setHeightForWidth(ir_ArD->sizePolicy().hasHeightForWidth());
        ir_ArD->setSizePolicy(sizePolicy1);
        ir_ArD->setFont(font);
        ir_ArD->setFocusPolicy(Qt::NoFocus);
        ir_ArD->setLayoutDirection(Qt::LeftToRight);
        ir_ArD->setLineWidth(5);
        controle_robot = new QGroupBox(centralwidget);
        controle_robot->setObjectName(QString::fromUtf8("controle_robot"));
        controle_robot->setGeometry(QRect(0, 410, 381, 331));
        controle_robot->setStyleSheet(QString::fromUtf8(""));
        reculer = new QPushButton(controle_robot);
        reculer->setObjectName(QString::fromUtf8("reculer"));
        reculer->setGeometry(QRect(120, 230, 121, 101));
        droite = new QPushButton(controle_robot);
        droite->setObjectName(QString::fromUtf8("droite"));
        droite->setGeometry(QRect(240, 130, 121, 101));
        gauche = new QPushButton(controle_robot);
        gauche->setObjectName(QString::fromUtf8("gauche"));
        gauche->setGeometry(QRect(0, 130, 121, 101));
        avancer = new QPushButton(controle_robot);
        avancer->setObjectName(QString::fromUtf8("avancer"));
        avancer->setGeometry(QRect(120, 30, 121, 101));
        avancer->setStyleSheet(QString::fromUtf8(""));
        arret = new QPushButton(controle_robot);
        arret->setObjectName(QString::fromUtf8("arret"));
        arret->setGeometry(QRect(120, 130, 121, 101));
        controle_robot_2 = new QGroupBox(centralwidget);
        controle_robot_2->setObjectName(QString::fromUtf8("controle_robot_2"));
        controle_robot_2->setGeometry(QRect(590, 410, 381, 331));
        controle_robot_2->setStyleSheet(QString::fromUtf8(""));
        baisser = new QPushButton(controle_robot_2);
        baisser->setObjectName(QString::fromUtf8("baisser"));
        baisser->setGeometry(QRect(120, 230, 121, 101));
        droite_camera = new QPushButton(controle_robot_2);
        droite_camera->setObjectName(QString::fromUtf8("droite_camera"));
        droite_camera->setGeometry(QRect(240, 130, 121, 101));
        gauche_camera = new QPushButton(controle_robot_2);
        gauche_camera->setObjectName(QString::fromUtf8("gauche_camera"));
        gauche_camera->setGeometry(QRect(0, 130, 121, 101));
        lever = new QPushButton(controle_robot_2);
        lever->setObjectName(QString::fromUtf8("lever"));
        lever->setGeometry(QRect(120, 30, 121, 101));
        lever->setStyleSheet(QString::fromUtf8(""));
        MainWindow->setCentralWidget(centralwidget);
        connection->raise();
        affichage_robot->raise();
        controle_robot->raise();
        frame->raise();
        controle_robot_2->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 972, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "WiFiBot", nullptr));
        connection->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        affichage_robot->setTitle(QCoreApplication::translate("MainWindow", "Zone d'affichage du robot", nullptr));
        controle_robot->setTitle(QCoreApplication::translate("MainWindow", "Interface de controle du robot", nullptr));
        reculer->setText(QCoreApplication::translate("MainWindow", "Reculer", nullptr));
        droite->setText(QCoreApplication::translate("MainWindow", "Droite", nullptr));
        gauche->setText(QCoreApplication::translate("MainWindow", "Gauche", nullptr));
        avancer->setText(QCoreApplication::translate("MainWindow", "Avancer", nullptr));
        arret->setText(QCoreApplication::translate("MainWindow", "STOP", nullptr));
        controle_robot_2->setTitle(QCoreApplication::translate("MainWindow", "Interface de controle de la camera", nullptr));
        baisser->setText(QCoreApplication::translate("MainWindow", "Baisser", nullptr));
        droite_camera->setText(QCoreApplication::translate("MainWindow", "Droite", nullptr));
        gauche_camera->setText(QCoreApplication::translate("MainWindow", "Gauche", nullptr));
        lever->setText(QCoreApplication::translate("MainWindow", "Lever", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
