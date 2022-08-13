#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
  : QWidget(parent)
  , ui(new Ui::Widget)
{
  ui->setupUi(this);
}

Widget::~Widget()
{
  delete ui;
}

void Widget::paintEvent(QPaintEvent *event)
{
  QPainter myPainter(this);
  myPainter.setFont(QFont("Times",15));
  myPainter.drawText(QPoint(100,100),"Qt6 course");

  //adding html content
  QTextDocument textDocument;
  textDocument.setHtml("<b>Welcome to QT6 course</b><i>Udemy Course</i><font size='15' color='red'>Enjoy the course</font>");
  textDocument.drawContents(&myPainter);

  //Drawing Line
  myPainter.drawLine(QPoint(50,50),QPoint(200,200));
}

