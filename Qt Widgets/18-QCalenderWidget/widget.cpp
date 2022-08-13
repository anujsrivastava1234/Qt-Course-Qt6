#include "widget.h"

Widget::Widget(QWidget *parent)
  : QWidget(parent)
{
  QVBoxLayout *vBox=new QVBoxLayout(this);

  calendar=new QCalendarWidget();
  calendar->setGridVisible(true);
  connect(calendar,SIGNAL(selectionChanged()),this,SLOT(changeDate()));
  label=new QLabel();
  label->setText("Hello");
  label->setFont(QFont("Times",14));

  vBox->addWidget(calendar);
  vBox->addWidget(label);

}

Widget::~Widget()
{
}

void Widget::changeDate()
{
  QString dateselected=calendar->selectedDate().toString();
  label->setText(dateselected);
}

