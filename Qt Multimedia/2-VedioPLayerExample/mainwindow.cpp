#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
  : QMainWindow(parent)
  , ui(new Ui::MainWindow)
{
  ui->setupUi(this);
  player=new QMediaPlayer(this);

  //vedio output
  QVideoWidget *videoWidget=new QVideoWidget(this);
  player->setVideoOutput(videoWidget);
  ui->vedioFrame->addWidget(videoWidget);

  //audioOutput
  audioOutput=new QAudioOutput(this);
  player->setAudioOutput(audioOutput);
  audioOutput->setVolume(ui->volumeSlider->value());

//  QSlider *slider=new QSlider(this);

  connect(player,&QMediaPlayer::playbackStateChanged,this,&MainWindow::stateChanged);
  connect(player,&QMediaPlayer::positionChanged,this,&MainWindow::positionchanged);


//  connect(player,&QMediaPlayer::durationChanged,slider,&QSlider::setMaximum);
//  connect(player,&QMediaPlayer::positionChanged,slider,&QSlider::setValue);
//  connect(slider,&QSlider::sliderMoved,player,&QMediaPlayer::setPosition);

}

MainWindow::~MainWindow()
{
  delete ui;
}

void MainWindow::stateChanged(QMediaPlayer::PlaybackState state)
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

  //set Timer
  int second=(position/1000)%60;
  int minute=(position/60000)%60;
  int hours=(position/3600000)%24;

  QTime time(hours,minute,second);
  ui->labelTimer->setText(time.toString());


}


void MainWindow::on_playButton_clicked()
{
    player->play();
}


void MainWindow::on_pauseButton_clicked()
{
    player->pause();
}


void MainWindow::on_stopButton_clicked()
{
    player->stop();
}


void MainWindow::on_horizontalSliderPlay_sliderMoved(int position)
{
    player->setPosition(position);
}


void MainWindow::on_volumeSlider_sliderMoved(int position)
{
   audioOutput->setVolume(position);
}


void MainWindow::on_actionOpen_Vedio_triggered()
{
    QString fileName=QFileDialog::getOpenFileName(this,"SELECT VIDEO FILE","","Video File (*.*)");
    QFileInfo fileInfo(fileName);

    player->setSource(QUrl::fromLocalFile(fileName));
    ui->playButton->setEnabled(true);
    ui->playButton->click();
}


void MainWindow::on_volumeButton_clicked()
{
    if(muted){
        audioOutput->setMuted(true);
        ui->volumeSlider->setValue(0);
        ui->volumeButton->setIcon(QIcon(":images/mute.png"));
        muted=false;
      }else{
        audioOutput->setMuted(false);
        ui->volumeSlider->setValue(50);
        ui->volumeButton->setIcon(QIcon(":images/volume.png"));
        muted=true;
      }
}

