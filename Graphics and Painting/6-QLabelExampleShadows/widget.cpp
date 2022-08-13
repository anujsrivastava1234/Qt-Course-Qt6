#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
  : QWidget(parent)
  , ui(new Ui::Widget)
{
  ui->setupUi(this);
  ui->labelImage->setPixmap(QPixmap(":/images/ww.png"));

//  //adding shadow for label
//  QGraphicsDropShadowEffect *shadow=new QGraphicsDropShadowEffect(this);
//  shadow->setXOffset(7);
//  shadow->setYOffset(7);
//  ui->label->setGraphicsEffect(shadow);

//  //colorize the label
//  QGraphicsColorizeEffect *colorize=new QGraphicsColorizeEffect(this);
//  colorize->setColor(QColor(255,0,255));
//  ui->labelImage->setGraphicsEffect(colorize);

//  //add blur effect
//  QGraphicsBlurEffect *blur=new QGraphicsBlurEffect(this);
//  blur->setBlurRadius(12);
//  ui->labelImage->setGraphicsEffect(blur);
//  ui->label->setGraphicsEffect(blur);

  QGraphicsOpacityEffect *alpha=new QGraphicsOpacityEffect(this);
  alpha->setOpacity(0.2);
  ui->label->setGraphicsEffect(alpha);
  ui->labelImage->setGraphicsEffect(alpha);
}

Widget::~Widget()
{
  delete ui;
}

