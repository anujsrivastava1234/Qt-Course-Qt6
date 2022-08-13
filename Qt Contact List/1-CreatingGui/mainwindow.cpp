#include "mainwindow.h"
#include "./ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
  : QMainWindow(parent)
  , ui(new Ui::MainWindow)
{
  ui->setupUi(this);
  connect(ui->actionQuit,&QAction::triggered,this,&QApplication::quit);

  //adding to header View
  model=new QStandardItemModel();
  ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
  model->setHorizontalHeaderItem(0,new QStandardItem(QString("Name")));
  model->setHorizontalHeaderItem(1,new QStandardItem(QString("Phone")));

  ui->tableView->setModel(model);

  //adding table items
//  QStandardItem *firstItem=new QStandardItem(QString("Anuj"));
//  QStandardItem *SecondItem=new QStandardItem(QString("6386446464"));

//  model->setItem(0,0,firstItem);
//  model->setItem(0,1,SecondItem);
}

MainWindow::~MainWindow()
{
  delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QStandardItem *name=new QStandardItem(ui->lineEditName->text());
    QStandardItem *phone=new QStandardItem(ui->lineEditPhone->text());
    QMessageBox::information(this,"Application","This Message has been saved");

    model->appendRow({name,phone});
    clearField();
}

void MainWindow::clearField()
{
  ui->lineEditName->setText("");
  ui->lineEditPhone->setText("");
}


void MainWindow::on_actionAbout_App_triggered()
{
    QMessageBox::about(this,"About","This App was developed with Qt6 & C++");
}


void MainWindow::on_pushButton_2_clicked()
{
   msg=new QMessageBox();
   msg->setText("Delete Items");
   msg->setInformativeText("Do you want to delete all items ?");
   msg->setStandardButtons(QMessageBox::Yes|QMessageBox::Discard|QMessageBox::Cancel);
   int ret=msg->exec();

   if(ret==QMessageBox::Yes)
     model->clear();
}


void MainWindow::on_pushButton_3_clicked()
{
    bool ok;
    int rowId=QInputDialog::getInt(this,"Select Row","Please enter a row to delete",1,1,model->rowCount(),1,&ok);

    if(ok){
        model->removeRow(rowId-1);
      }
}

