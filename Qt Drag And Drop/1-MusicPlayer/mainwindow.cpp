#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
  : QMainWindow(parent)
  , ui(new Ui::MainWindow)
{
  ui->setupUi(this);
  ui->setupUi(this);
  player=new QMediaPlayer(this);
  audioOutput=new QAudioOutput(this);
  player->setAudioOutput(audioOutput);
  audioOutput->setVolume(ui->horizontalSlider_2->value());

  //connection for statechanged
  connect(player,&QMediaPlayer::playbackStateChanged,this,&MainWindow::statechanged);
  connect(player,&QMediaPlayer::positionChanged,this,&MainWindow::positionchanged);
}

MainWindow::~MainWindow()
{
  delete ui;
}

void MainWindow::statechanged(QMediaPlayer::PlaybackState state)
{
  if(state==QMediaPlayer::PlayingState){
      ui->playButton->setEnabled(true);
      ui->pauseButton->setEnabled(true);
      ui->stopButton->setEnabled(true);
    }else if(state==QMediaPlayer::PausedState){
      ui->playButton->setEnabled(true);
      ui->pauseButton->setEnabled(false);
      ui->stopButton->setEnabled(true);
    }else if(state==QMediaPlayer::StoppedState){
    ui->playButton->setEnabled(true);
    ui->pauseButton->setEnabled(false);
    ui->stopButton->setEnabled(false);
  }

}
void MainWindow::positionchanged(qint64 position)
{
  if(ui->horizontalSliderPlay->maximum()!=player->duration())
    ui->horizontalSliderPlay->setMaximum(player->duration());
  ui->horizontalSliderPlay->setValue(position);

  //timer setting
  int second=(position/1000)%60;
  int minutes=(position/60000)%60;
  int hours=(position/3600000)%24;

  QTime time(hours,minutes,second);
  ui->labelTimer->setText(time.toString());
}


void MainWindow::on_playButton_triggered(QAction *arg1)
{
  player->play();
}


void MainWindow::on_pauseButton_triggered(QAction *arg1)
{
    player->pause();
}


void MainWindow::on_stopButton_triggered(QAction *arg1)
{
    player->stop();
}



void MainWindow::on_actionOpen_triggered()
{
  QString fileName=QFileDialog::getOpenFileName(this,"SELECT AUDIO FILE");
  QFileInfo fileInfo(fileName);

  player->setSource(QUrl::fromLocalFile(fileName));
  ui->playButton->setEnabled(true);
  ui->playButton->click();
}


void MainWindow::on_horizontalSlider_2_sliderMoved(int position)
{
 audioOutput->setVolume(position);
}


void MainWindow::on_horizontalSliderPlay_sliderMoved(int position)
{
    player->setPosition(position);
}

