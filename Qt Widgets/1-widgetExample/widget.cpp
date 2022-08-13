#include "widget.h"

Widget::Widget(QWidget *parent)
  : QWidget(parent)
{
  setWindowTitle("QLabel");
  resize(500,300);

//  QLabel *label=new QLabel(this);
//  label->setText("This is a Text");
//  label->move(100,100);
//  label->setFont(QFont("lato",14));
//  label->setGeometry(100,100,300,300);
//  label->setStyleSheet("color:red");

//  QLabel *label=new QLabel(this);
//  label->setPixmap(QPixmap(":/images/ww.png"));

  QLabel *label = new QLabel(this);
  QMovie *movie=new QMovie(":/images/ww.gif");
  label->setMovie(movie);
  movie->start();
}

Widget::~Widget()
{
}

