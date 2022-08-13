#include "widget.h"

Widget::Widget(QWidget *parent)
  : QWidget(parent)
{
  QTableWidget *table=new QTableWidget(this);
  table->setFont(QFont("Sanserif",14));
  table->setStyleSheet("background-color:white");

  table->setRowCount(3);
  table->setColumnCount(3);

  QTableWidgetItem *name=new QTableWidgetItem("Name");
  table->setItem(0,0,name);

}

Widget::~Widget()
{
}

