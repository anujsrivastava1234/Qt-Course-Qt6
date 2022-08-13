#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
  : QWidget(parent)
  , ui(new Ui::Widget)
{
  ui->setupUi(this);
  hasInit=false;

  QSqlDatabase db=QSqlDatabase::addDatabase("QMYSQL");
  db.setHostName("localhost");
  db.setUserName("root");
  db.setPassword("");
  db.setDatabaseName("qt6");

  ui->tableWidget->setColumnHidden(0,true);

  if(db.open()){
      QSqlQuery query;
      if(query.exec("SELECT * FROM employee")){
          while(query.next()){
              QString id=query.value(0).toString();
              QString name=query.value(1).toString();
              QString age=query.value(2).toString();
              QString email=query.value(3).toString();
              ui->tableWidget->setRowCount(ui->tableWidget->rowCount()+1);

              QTableWidgetItem *idItem=new QTableWidgetItem(id);
              QTableWidgetItem *nameItem=new QTableWidgetItem(name);
              QTableWidgetItem *ageItem=new QTableWidgetItem(age);
              QTableWidgetItem *emailItem=new QTableWidgetItem(email);

              ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,0,idItem);
              ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,1,nameItem);
              ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,2,ageItem);
              ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,3,emailItem);
            }
          hasInit=true;
        }else{
          QMessageBox::information(this,"Error","Database not found");
        }
    }else{
      QMessageBox::information(this,"Error","Cannot connect to database");
    }


}

Widget::~Widget()
{
  delete ui;
}


void Widget::on_tableWidget_itemChanged(QTableWidgetItem *item)
{
    QSqlQuery query;
    if(hasInit){
        QString id =ui->tableWidget->item(item->row(),0)->data(0).toString();
        QString name =ui->tableWidget->item(item->row(),1)->data(0).toString();
        QString age =QString::number(ui->tableWidget->item(item->row(),2)->data(0).toInt());
        ui->tableWidget->item(item->row(),2)->setData(0,age);
        QString email=ui->tableWidget->item(item->row(),3)->data(0).toString();

        if(query.exec("UPDATE employee SET name='"+name+"',age='"+age+"',email='"+email+"'WHERE id="+id)){
            QMessageBox::information(this,"Data Added","Data updated susccessfullly");
          }else{
            QMessageBox::information(this,"Error","Data not added");
        }
      }
}

