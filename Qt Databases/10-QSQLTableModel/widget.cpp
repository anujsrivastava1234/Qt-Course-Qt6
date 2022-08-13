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
      QSqlTableModel *query=new QSqlTableModel;
      query->setTable("employee");
      query->select();
      ui->tableView->setModel(query);
    }else{
      QMessageBox::information(this,"Error","Cannot connect to database");
    }
}

Widget::~Widget()
{
  delete ui;
}

