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


void Widget::on_pushButton_clicked()
{
  QSqlDatabase sqlitedb=QSqlDatabase::addDatabase("QSQLITE");
  sqlitedb.setDatabaseName("E:/Databases/mydb.sqlite");

  if(!sqlitedb.open()){
      ui->label->setText("Database not connected !!");
    }else{
      ui->label->setText("Database connected sucessfully !!");
    }
}

