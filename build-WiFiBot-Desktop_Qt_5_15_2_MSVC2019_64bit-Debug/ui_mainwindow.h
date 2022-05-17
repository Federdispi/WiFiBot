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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *connection;
    QPushButton *disconnection;
    QPushButton *avancer;
    QPushButton *reculer;
    QPushButton *droite;
    QPushButton *gauche;
    QFrame *frame;
    QDoubleSpinBox *speed;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        connection = new QPushButton(centralwidget);
        connection->setObjectName(QString::fromUtf8("connection"));
        connection->setGeometry(QRect(0, 0, 161, 81));
        disconnection = new QPushButton(centralwidget);
        disconnection->setObjectName(QString::fromUtf8("disconnection"));
        disconnection->setGeometry(QRect(160, 0, 161, 81));
        avancer = new QPushButton(centralwidget);
        avancer->setObjectName(QString::fromUtf8("avancer"));
        avancer->setGeometry(QRect(130, 250, 121, 101));
        reculer = new QPushButton(centralwidget);
        reculer->setObjectName(QString::fromUtf8("reculer"));
        reculer->setGeometry(QRect(130, 450, 121, 101));
        droite = new QPushButton(centralwidget);
        droite->setObjectName(QString::fromUtf8("droite"));
        droite->setGeometry(QRect(250, 350, 121, 101));
        gauche = new QPushButton(centralwidget);
        gauche->setObjectName(QString::fromUtf8("gauche"));
        gauche->setGeometry(QRect(10, 350, 121, 101));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(339, 9, 451, 301));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        speed = new QDoubleSpinBox(centralwidget);
        speed->setObjectName(QString::fromUtf8("speed"));
        speed->setGeometry(QRect(60, 130, 181, 91));
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
        speed->setMaximum(200.000000000000000);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        connection->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        disconnection->setText(QCoreApplication::translate("MainWindow", "Disconnect", nullptr));
        avancer->setText(QCoreApplication::translate("MainWindow", "Avancer", nullptr));
        reculer->setText(QCoreApplication::translate("MainWindow", "Reculer", nullptr));
        droite->setText(QCoreApplication::translate("MainWindow", "Droite", nullptr));
        gauche->setText(QCoreApplication::translate("MainWindow", "Gauche", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
