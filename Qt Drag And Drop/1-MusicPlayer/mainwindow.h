#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMediaPlayer>
#include <QAudioOutput>
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
  void statechanged(QMediaPlayer::PlaybackState state);
  void positionchanged(qint64 position);

private slots:
  void on_playButton_triggered(QAction *arg1);

  void on_pauseButton_triggered(QAction *arg1);

  void on_stopButton_triggered(QAction *arg1);

  void on_volumeButton_triggered(QAction *arg1);

  void on_actionOpen_triggered();

  void on_horizontalSlider_2_sliderMoved(int position);

  void on_horizontalSliderPlay_sliderMoved(int position);

private:
  Ui::MainWindow *ui;
  QMediaPlayer *player;
  QAudioOutput *audioOutput;
};
#endif // MAINWINDOW_H
