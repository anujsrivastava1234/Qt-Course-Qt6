#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMouseEvent>

MainWindow::MainWindow(QWidget *parent)
  : QMainWindow(parent)
  , ui(new Ui::MainWindow)
{
  ui->setupUi(this);

  image=QImage(this->size(),QImage::Format_RGB32);
  image.fill(Qt::white);
  drawing=false;
  brushColor=Qt::black;
  brushsize=2;

}

MainWindow::~MainWindow()
{
  delete ui;
}

void MainWindow::mousePressEvent(QMouseEvent *event)
{
  if(event->button()==Qt::LeftButton){
      drawing=true;
      lastPoint=event->pos();
    }

}

void MainWindow::mouseMoveEvent(QMouseEvent *event)
{
  if((event->button() & Qt::LeftButton) && drawing){
      QPainter painter(&image);
      painter.setPen(QPen(brushColor,brushsize,Qt::SolidLine,Qt::RoundCap,Qt::RoundJoin));
      painter.drawLine(lastPoint,event->pos());
      lastPoint=event->pos();
      this->update();
    }
}

void MainWindow::mouseReleaseEvent(QMouseEvent *event)
{
  if(event->button()==Qt::LeftButton){
      drawing=false;
    }

}

void MainWindow::paintEvent(QPaintEvent *event)
{
  QPainter canvasPainter(this);
  canvasPainter.drawImage(this->rect(),image,image.rect());

}

