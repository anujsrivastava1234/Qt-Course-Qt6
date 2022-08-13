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
        QString name=ui->lineEditName->text();
        QString age=ui->lineEditAge->text();
        QString email=ui->lineEditEmail->text();

        QSqlQuery query;
        query.prepare("INSERT INTO employee (name, age, email) VALUES (:name,:age,:email)");
        query.bindValue(":name",name);
        query.bindValue(":age",age);
        query.bindValue(":email",email);

        if(query.exec()){
            ui->label_4->setText("Data Added Sucessfully");
            ui->lineEditName->setText("");
            ui->lineEditAge->setText("");
            ui->lineEditEmail->setText("");
          }else{
            ui->label_4->setText("Data not added");

          }
      }
    else{
        ui->label_4->setText("Cannot connect to database");
      }
}

