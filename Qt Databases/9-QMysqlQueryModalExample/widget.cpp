#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
  : QWidget(parent)
  , ui(new Ui::Widget)
{
  ui->setupUi(this);
  QSqlDatabase db=QSqlDatabase::addDatabase("QMYSQL");
  db.setHostName("localhost");
  db.setUserName("root");
  db.setPassword("");
  db.setDatabaseName("qt6");

  if(db.open()){
      QSqlQueryModel *query=new QSqlQueryModel;
      query->setQuery("SELECT * FROM employee");
      ui->tableView->setModel(query);
    }else{
      QMessageBox::information(this,"ERROR","cannot add Data");
    }
}

Widget::~Widget()
{
  delete ui;
}

