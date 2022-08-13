/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSave;
    QAction *actionClear;
    QAction *action3px;
    QAction *action5px;
    QAction *action7px;
    QAction *action9px;
    QAction *actionBlack;
    QAction *actionWhite;
    QAction *actionRed;
    QAction *actionGreen;
    QAction *actionYellow;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuBrush_Size;
    QMenu *menuBrush_Color;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/images.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon);
        actionClear = new QAction(MainWindow);
        actionClear->setObjectName(QString::fromUtf8("actionClear"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/clear.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionClear->setIcon(icon1);
        action3px = new QAction(MainWindow);
        action3px->setObjectName(QString::fromUtf8("action3px"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/3px.png"), QSize(), QIcon::Normal, QIcon::Off);
        action3px->setIcon(icon2);
        action5px = new QAction(MainWindow);
        action5px->setObjectName(QString::fromUtf8("action5px"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/5px.png"), QSize(), QIcon::Normal, QIcon::Off);
        action5px->setIcon(icon3);
        action7px = new QAction(MainWindow);
        action7px->setObjectName(QString::fromUtf8("action7px"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/7px.png"), QSize(), QIcon::Normal, QIcon::Off);
        action7px->setIcon(icon4);
        action9px = new QAction(MainWindow);
        action9px->setObjectName(QString::fromUtf8("action9px"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/9px.png"), QSize(), QIcon::Normal, QIcon::Off);
        action9px->setIcon(icon5);
        actionBlack = new QAction(MainWindow);
        actionBlack->setObjectName(QString::fromUtf8("actionBlack"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/black.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBlack->setIcon(icon6);
        actionWhite = new QAction(MainWindow);
        actionWhite->setObjectName(QString::fromUtf8("actionWhite"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/white.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionWhite->setIcon(icon7);
        actionRed = new QAction(MainWindow);
        actionRed->setObjectName(QString::fromUtf8("actionRed"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/red.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRed->setIcon(icon8);
        actionGreen = new QAction(MainWindow);
        actionGreen->setObjectName(QString::fromUtf8("actionGreen"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/green.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionGreen->setIcon(icon9);
        actionYellow = new QAction(MainWindow);
        actionYellow->setObjectName(QString::fromUtf8("actionYellow"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/images/yellow.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionYellow->setIcon(icon10);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuBrush_Size = new QMenu(menubar);
        menuBrush_Size->setObjectName(QString::fromUtf8("menuBrush_Size"));
        menuBrush_Color = new QMenu(menubar);
        menuBrush_Color->setObjectName(QString::fromUtf8("menuBrush_Color"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuBrush_Size->menuAction());
        menubar->addAction(menuBrush_Color->menuAction());
        menuFile->addAction(actionSave);
        menuFile->addAction(actionClear);
        menuBrush_Size->addAction(action3px);
        menuBrush_Size->addAction(action5px);
        menuBrush_Size->addAction(action7px);
        menuBrush_Size->addAction(action9px);
        menuBrush_Color->addAction(actionBlack);
        menuBrush_Color->addAction(actionWhite);
        menuBrush_Color->addAction(actionRed);
        menuBrush_Color->addAction(actionGreen);
        menuBrush_Color->addAction(actionYellow);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        actionClear->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        action3px->setText(QCoreApplication::translate("MainWindow", "3px", nullptr));
        action5px->setText(QCoreApplication::translate("MainWindow", "5px", nullptr));
        action7px->setText(QCoreApplication::translate("MainWindow", "7px", nullptr));
        action9px->setText(QCoreApplication::translate("MainWindow", "9px", nullptr));
        actionBlack->setText(QCoreApplication::translate("MainWindow", "Black", nullptr));
        actionWhite->setText(QCoreApplication::translate("MainWindow", "White", nullptr));
        actionRed->setText(QCoreApplication::translate("MainWindow", "Red", nullptr));
        actionGreen->setText(QCoreApplication::translate("MainWindow", "Green", nullptr));
        actionYellow->setText(QCoreApplication::translate("MainWindow", "Yellow", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuBrush_Size->setTitle(QCoreApplication::translate("MainWindow", "Brush Size", nullptr));
        menuBrush_Color->setTitle(QCoreApplication::translate("MainWindow", "Brush Color", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
