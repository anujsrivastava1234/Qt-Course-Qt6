#include "widget.h"

Widget::Widget(QWidget *parent)
  : QWidget(parent)
{

  check1=new QCheckBox();
  check1->setText("Python");
  check1->setFont(QFont("Times",14));
  connect(check1,SIGNAL(stateChanged(int)),this,SLOT(changedcheck()));

  check2=new QCheckBox();
  check2->setText("C++");
  check2->setFont(QFont("Times",14));
  connect(check2,SIGNAL(stateChanged(int)),this,SLOT(changedcheck()));

  check3=new QCheckBox();
  check3->setText("Java");
  check3->setFont(QFont("Times",14));
  connect(check3,SIGNAL(stateChanged(int)),this,SLOT(changedcheck()));

  label=new QLabel();
  label->setText("Hello");
  label->setFont(QFont("Times",14));


  QVBoxLayout *vBox=new QVBoxLayout(this);
  vBox->addWidget(label);

  QHBoxLayout *hbox=new QHBoxLayout();
  hbox->addWidget(check1);
  hbox->addWidget(check2);
  hbox->addWidget(check3);
  vBox->addLayout(hbox);
}

Widget::~Widget()
{
}

void Widget::changedcheck()
{
  QString value="";
  if(check1->isChecked()){
      value=check1->text();
    }
  if(check2->isChecked()){
      value=check2->text();
    }
  if(check3->isChecked()){
      value=check3->text();
    }

  label->setText("You have selected: "+value);
  label->setFont(QFont("Times",14));
}

