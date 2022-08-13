#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
  : QMainWindow(parent)
  , ui(new Ui::MainWindow)
{
  resize(800,600);
  ui->setupUi(this);

  //set Time
  QTimer *timer=new QTimer(this);
  connect(timer,SIGNAL(timeout),this,SLOT(showTime));
  timer->start();
  showTime();

}

MainWindow::~MainWindow()
{
  delete ui;
}

void MainWindow::showTime()
{
  QTime time=QTime::currentTime();
  QString text=time.toString("hh:mm:ss");
  if((time.second()%2)==0)
    text[2]=':';
  ui->timeslate->setText(text);

}

