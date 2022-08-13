#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMediaPlayer>
#include <QAudioOutput>
#include <QVideoWidget>
#include <QTime>
#include <QFileDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
  Q_OBJECT

public:
  MainWindow(QWidget *parent = nullptr);
  ~MainWindow();
  void stateChanged(QMediaPlayer::PlaybackState state);
  void positionchanged(qint64 position);

private slots:
  void on_playButton_clicked();

  void on_pauseButton_clicked();

  void on_stopButton_clicked();

  void on_horizontalSliderPlay_sliderMoved(int position);

  void on_volumeSlider_sliderMoved(int position);

  void on_actionOpen_Vedio_triggered();

  void on_volumeButton_clicked();

private:
  Ui::MainWindow *ui;
  QMediaPlayer *player;
  QAudioOutput *audioOutput;

  bool muted;

};
#endif // MAINWINDOW_H
