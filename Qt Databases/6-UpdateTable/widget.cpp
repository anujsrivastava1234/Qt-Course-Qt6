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
        QString name=ui->lineEditName->text();
        QString age=ui->lineEditAge->text();
        QString email=ui->lineEditEmail->text();

        QSqlQuery query;
        if(query.exec("UPDATE employee SET name='"+name+"',age='"+age+"',email='"+email+"'WHERE id="+id)){
            ui->label_5->setText("Data Updated Sucessfully");
          }else{
            ui->label_5->setText("Data not updated");
          }
      }else{
        ui->label_5->setText("Cannot connect to Database");
      }
}

