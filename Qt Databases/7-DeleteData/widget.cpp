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
    QSqlDatabase db=QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setUserName("root");
    db.setPassword("");
    db.setDatabaseName("qt6");

    if(db.open()){
        QString id=ui->lineEditId->text();
        QSqlQuery query;
        if(query.exec("DELETE FROM employee WHERE id="+id)){
            ui->label_2->setText("Database Deleted sucessfully");
            ui->lineEditId->setText("");
          }else{
            ui->label_2->setText("Database not deleted");
          }
      }else{
        ui->label_2->setText("Database not connected");
      }
}

