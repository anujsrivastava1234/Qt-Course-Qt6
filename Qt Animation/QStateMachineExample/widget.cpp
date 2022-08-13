#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
  : QWidget(parent)
  , ui(new Ui::Widget)
{
  ui->setupUi(this);

  QStateMachine *machine=new QStateMachine(this);
  QState *s1=new QState();
  s1->assignProperty(ui->statelabel,"text","current state:1");
  s1->assignProperty(ui->pushButtonMachine,"geometry",QRect(50,200,100,50));

  QState *s2=new QState();
  s2->assignProperty(ui->statelabel,"text","current state:2");
  s2->assignProperty(ui->pushButtonMachine,"geometry",QRect(150,200,100,50));

  QEventTransition *t1=new QEventTransition(ui->changeStatebtn,QEvent::MouseButtonPress);
  t1->setTargetState(s2);
  s1->addTransition(t1);

  QEventTransition *t2=new QEventTransition(ui->changeStatebtn,QEvent::MouseButtonPress);
  t2->setTargetState(s1);
  s2->addTransition(t2);

  machine->addState(s1);
  machine->addState(s2);
  machine->setInitialState(s1);
  machine->start();


}

Widget::~Widget()
{
  delete ui;
}

