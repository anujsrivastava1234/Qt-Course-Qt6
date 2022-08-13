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
  QSqlDatabase sqlite=QSqlDatabase::addDatabase("QSQLITE");
  sqlite.setDatabaseName("E:/Databases/new.sqlite");

  if(!sqlite.open()){
      ui->label->setText("Database not connected");
    }else{
      QSqlQuery query;
      query.exec("create table users"
                 "(id integer primary key,"
                 "firstname varchar(20),"
                 "lastname varchar(20),"
                 "age integer)");
      ui->label->setText("Table is created");
    }
}

