#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
  : QMainWindow(parent)
  , ui(new Ui::MainWindow)
{
  ui->setupUi(this);
  webview=new QWebEngineView();
  webview->load(QUrl("https://www.google.com"));
  ui->verticalLayout->addWidget(webview);
}

MainWindow::~MainWindow()
{
  delete ui;
}

