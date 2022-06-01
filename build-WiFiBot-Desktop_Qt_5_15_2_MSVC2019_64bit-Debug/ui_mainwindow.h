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
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *connection;
    QPushButton *disconnection;
    QFrame *frame;
    QGroupBox *affichage_robot;
    QDoubleSpinBox *speed;
    QLCDNumber *speed_received;
    QProgressBar *battery;
    QLCDNumber *ir_D;
    QLCDNumber *ir_G;
    QGroupBox *controle_robot;
    QPushButton *reculer;
    QPushButton *droite;
    QPushButton *gauche;
    QPushButton *avancer;
    QGroupBox *controle_camera;
    QScrollBar *horizontalScrollBar;
    QScrollBar *verticalScrollBar;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(795, 609);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        connection = new QPushButton(centralwidget);
        connection->setObjectName(QString::fromUtf8("connection"));
        connection->setGeometry(QRect(0, 0, 161, 81));
        connection->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 0);"));
        disconnection = new QPushButton(centralwidget);
        disconnection->setObjectName(QString::fromUtf8("disconnection"));
        disconnection->setGeometry(QRect(160, 0, 161, 81));
        disconnection->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 9, 0);"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(340, 0, 451, 301));
        frame->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(0, 0, 0, 255), stop:0.19397 rgba(0, 0, 0, 255), stop:0.202312 rgba(122, 97, 0, 255), stop:0.495514 rgba(76, 58, 0, 255), stop:0.504819 rgba(255, 255, 255, 255), stop:0.79 rgba(255, 255, 255, 255), stop:1 rgba(255, 158, 158, 255));"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        affichage_robot = new QGroupBox(centralwidget);
        affichage_robot->setObjectName(QString::fromUtf8("affichage_robot"));
        affichage_robot->setGeometry(QRect(380, 310, 411, 251));
        speed = new QDoubleSpinBox(affichage_robot);
        speed->setObjectName(QString::fromUtf8("speed"));
        speed->setGeometry(QRect(0, 20, 181, 91));
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
        speed_received->setGeometry(QRect(190, 20, 91, 61));
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
        battery->setGeometry(QRect(290, 40, 118, 23));
        battery->setValue(24);
        ir_D = new QLCDNumber(affichage_robot);
        ir_D->setObjectName(QString::fromUtf8("ir_D"));
        ir_D->setGeometry(QRect(300, 170, 91, 61));
        sizePolicy1.setHeightForWidth(ir_D->sizePolicy().hasHeightForWidth());
        ir_D->setSizePolicy(sizePolicy1);
        ir_D->setFont(font);
        ir_D->setFocusPolicy(Qt::NoFocus);
        ir_D->setLayoutDirection(Qt::LeftToRight);
        ir_D->setLineWidth(5);
        ir_G = new QLCDNumber(affichage_robot);
        ir_G->setObjectName(QString::fromUtf8("ir_G"));
        ir_G->setGeometry(QRect(30, 170, 91, 61));
        sizePolicy1.setHeightForWidth(ir_G->sizePolicy().hasHeightForWidth());
        ir_G->setSizePolicy(sizePolicy1);
        ir_G->setFont(font);
        ir_G->setFocusPolicy(Qt::NoFocus);
        ir_G->setLayoutDirection(Qt::LeftToRight);
        ir_G->setLineWidth(5);
        controle_robot = new QGroupBox(centralwidget);
        controle_robot->setObjectName(QString::fromUtf8("controle_robot"));
        controle_robot->setGeometry(QRect(0, 230, 381, 331));
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
        controle_camera = new QGroupBox(centralwidget);
        controle_camera->setObjectName(QString::fromUtf8("controle_camera"));
        controle_camera->setGeometry(QRect(10, 80, 261, 151));
        horizontalScrollBar = new QScrollBar(controle_camera);
        horizontalScrollBar->setObjectName(QString::fromUtf8("horizontalScrollBar"));
        horizontalScrollBar->setGeometry(QRect(50, 100, 121, 41));
        horizontalScrollBar->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 178, 102, 255), stop:0.55 rgba(235, 148, 61, 255), stop:0.98 rgba(0, 0, 0, 255), stop:1 rgba(0, 0, 0, 0));\n"
""));
        horizontalScrollBar->setValue(50);
        horizontalScrollBar->setOrientation(Qt::Horizontal);
        verticalScrollBar = new QScrollBar(controle_camera);
        verticalScrollBar->setObjectName(QString::fromUtf8("verticalScrollBar"));
        verticalScrollBar->setGeometry(QRect(0, 20, 41, 121));
        verticalScrollBar->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 178, 102, 255), stop:0.55 rgba(235, 148, 61, 255), stop:0.98 rgba(0, 0, 0, 255), stop:1 rgba(0, 0, 0, 0));"));
        verticalScrollBar->setValue(50);
        verticalScrollBar->setOrientation(Qt::Vertical);
        MainWindow->setCentralWidget(centralwidget);
        connection->raise();
        disconnection->raise();
        affichage_robot->raise();
        controle_robot->raise();
        frame->raise();
        controle_camera->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 795, 26));
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
        disconnection->setText(QCoreApplication::translate("MainWindow", "Disconnect", nullptr));
        affichage_robot->setTitle(QCoreApplication::translate("MainWindow", "Zone d'affichage du robot", nullptr));
        controle_robot->setTitle(QCoreApplication::translate("MainWindow", "Interface de controle du robot", nullptr));
        reculer->setText(QCoreApplication::translate("MainWindow", "Reculer", nullptr));
        droite->setText(QCoreApplication::translate("MainWindow", "Droite", nullptr));
        gauche->setText(QCoreApplication::translate("MainWindow", "Gauche", nullptr));
        avancer->setText(QCoreApplication::translate("MainWindow", "Avancer", nullptr));
        controle_camera->setTitle(QCoreApplication::translate("MainWindow", "Interface de controle de la camera", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
