#include "widget.h"

Widget::Widget(QWidget *parent)
  : QWidget(parent)
{


  label=new QLabel();
  label->setText("Laptop Price: ");
  label->setFont(QFont("Times",15));

  price=new QLineEdit();
  price->setFont(QFont("Times",15));
  spinBox=new QSpinBox();
  spinBox->setFont(QFont("Times",15));
  connect(spinBox,SIGNAL(valueChanged(int)),this,SLOT(changeSpinBox()));

  total=new QLineEdit();
  total->setFont(QFont("Times",15));



  QHBoxLayout *hBox=new QHBoxLayout(this);
  hBox->addWidget(label);
  hBox->addWidget(price);
  hBox->addWidget(spinBox);
  hBox->addWidget(total);
}

Widget::~Widget()
{
}

void Widget::changeSpinBox()
{
  int myprice=price->text().toInt();
  int totalNumber=spinBox->value()*myprice;
  total->setText(QString::number(totalNumber));
}

