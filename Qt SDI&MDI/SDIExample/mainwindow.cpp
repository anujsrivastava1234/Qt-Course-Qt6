#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
  : QMainWindow(parent)
{
  setWindowTitle(tr("%1[*] - %2").arg(tr("unnamed")).arg(tr("SDI")));
  QTextEdit *textEdit=new QTextEdit(this);
  setCentralWidget(textEdit);

  createMenus();
}

MainWindow::~MainWindow()
{
}

void MainWindow::createActions()
{

}

void MainWindow::createMenus()
{
  QMenu *menu;
  menu=menuBar()->addMenu("File");
  menu=menuBar()->addMenu("Edit");
  menu=menuBar()->addMenu("Help");
}

