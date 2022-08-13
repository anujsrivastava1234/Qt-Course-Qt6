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
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen_Vedio;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *vedioFrame;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QSlider *horizontalSliderPlay;
    QLabel *labelTimer;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *playButton;
    QToolButton *pauseButton;
    QToolButton *stopButton;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QToolButton *volumeButton;
    QSlider *volumeSlider;
    QMenuBar *menubar;
    QMenu *menuFile;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        actionOpen_Vedio = new QAction(MainWindow);
        actionOpen_Vedio->setObjectName(QString::fromUtf8("actionOpen_Vedio"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        vedioFrame = new QHBoxLayout();
        vedioFrame->setSpacing(0);
        vedioFrame->setObjectName(QString::fromUtf8("vedioFrame"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vedioFrame->addItem(verticalSpacer);


        verticalLayout->addLayout(vedioFrame);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSliderPlay = new QSlider(centralwidget);
        horizontalSliderPlay->setObjectName(QString::fromUtf8("horizontalSliderPlay"));
        horizontalSliderPlay->setOrientation(Qt::Horizontal);

        horizontalLayout_4->addWidget(horizontalSliderPlay);

        labelTimer = new QLabel(centralwidget);
        labelTimer->setObjectName(QString::fromUtf8("labelTimer"));
        QFont font;
        font.setPointSize(12);
        labelTimer->setFont(font);

        horizontalLayout_4->addWidget(labelTimer);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        playButton = new QToolButton(centralwidget);
        playButton->setObjectName(QString::fromUtf8("playButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/play.png"), QSize(), QIcon::Normal, QIcon::Off);
        playButton->setIcon(icon);
        playButton->setIconSize(QSize(30, 30));

        horizontalLayout_2->addWidget(playButton);

        pauseButton = new QToolButton(centralwidget);
        pauseButton->setObjectName(QString::fromUtf8("pauseButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/pause.png"), QSize(), QIcon::Normal, QIcon::Off);
        pauseButton->setIcon(icon1);
        pauseButton->setIconSize(QSize(30, 30));

        horizontalLayout_2->addWidget(pauseButton);

        stopButton = new QToolButton(centralwidget);
        stopButton->setObjectName(QString::fromUtf8("stopButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        stopButton->setIcon(icon2);
        stopButton->setIconSize(QSize(30, 30));

        horizontalLayout_2->addWidget(stopButton);


        horizontalLayout_3->addLayout(horizontalLayout_2);

        horizontalSpacer = new QSpacerItem(248, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        volumeButton = new QToolButton(centralwidget);
        volumeButton->setObjectName(QString::fromUtf8("volumeButton"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/volume.png"), QSize(), QIcon::Normal, QIcon::Off);
        volumeButton->setIcon(icon3);
        volumeButton->setIconSize(QSize(30, 30));

        horizontalLayout->addWidget(volumeButton);

        volumeSlider = new QSlider(centralwidget);
        volumeSlider->setObjectName(QString::fromUtf8("volumeSlider"));
        volumeSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(volumeSlider);


        horizontalLayout_3->addLayout(horizontalLayout);


        verticalLayout->addLayout(horizontalLayout_3);


        verticalLayout_2->addLayout(verticalLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(actionOpen_Vedio);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionOpen_Vedio->setText(QCoreApplication::translate("MainWindow", "Open Vedio", nullptr));
        labelTimer->setText(QCoreApplication::translate("MainWindow", "00:00::00", nullptr));
        playButton->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        pauseButton->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        stopButton->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        volumeButton->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
