#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
  : QMainWindow(parent)
{
  setWindowTitle("QMainWindow");
  resize(500,300);

  statusBar()->showMessage("Hello World",5000);

//  menuBar()->addMenu("File");/*
//  menuBar()->addMenu("Edit");*/

  QAction *copyAction=new QAction("Copy");
  copyAction->setIcon(QIcon(":/images/copy.png"));
  copyAction->setShortcut(QKeySequence::Copy);

  QAction *pasteAction=new QAction("Paste");
  pasteAction->setIcon(QIcon(":/images/paste.png"));
  pasteAction->setShortcut(QKeySequence::Paste);

  QMenu *fileAction=menuBar()->addMenu("File");
  fileAction->addAction(copyAction);
  fileAction->addAction(pasteAction);
}

MainWindow::~MainWindow()
{
}

