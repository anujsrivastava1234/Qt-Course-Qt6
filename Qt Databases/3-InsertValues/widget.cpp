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


void Widget::on_insertData_clicked()
{
  QSqlDatabase db=QSqlDatabase::addDatabase("QSQLITE");
  db.setDatabaseName("E:/Databases/new.sqlite");

  if(!db.open()){
  QMessageBox::information(this,"Database error","Cannot connect database");
    }else{
      QSqlQuery query;
      QString firstName=ui->lineEditFirst->text();
      QString lastName=ui->lineEditLast->text();
      QString age=ui->lineEditAge->text();

      query.exec("INSERT INTO users(firstname,lastname,age) VALUES ('" + firstName + "','" + lastName + "'," + age + ")");
      QMessageBox::information(this,"Data Added","Values added to  database");

      ui->lineEditFirst->setText("");
      ui->lineEditLast->setText("");
      ui->lineEditAge->setText("");
    }
}

