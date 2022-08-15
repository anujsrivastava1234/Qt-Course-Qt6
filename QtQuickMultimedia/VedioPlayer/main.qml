import QtQuick.Controls
import QtQuick
import QtMultimedia

ApplicationWindow {
    width: 640
    height: 480
    visible: true
    title: "Simple Media Player"

    MediaPlayer {
        id: player
        source: "qrc:/vedio/vedio.mp4"
        audioOutput:audioOutput
        videoOutput: videoOutput


    }

    AudioOutput {
        id: audioOutput
        volume: volumeSlider.value


    }

    VideoOutput {
        id: videoOutput



        anchors.top: fullScreen ? parent.top : menuBar.bottom
        anchors.bottom: playbackControl.top
        anchors.left: parent.left
        anchors.right: parent.right




    }

    Slider {
        id: volumeSlider
        anchors.top: parent.top
        anchors.right: parent.right
        anchors.margins: 20
        orientation: Qt.Vertical
        value:0.5




    }

    Item {
        height:50
        anchors.left: parent.left
        anchors.right: parent.right
        anchors.bottom: parent.bottom
        anchors.margins: 20

        Button {
            anchors.horizontalCenter: parent.horizontalCenter
            text: player.playbackState === MediaPlayer.PlayingState ? "Pause" : "Play"
            onClicked: {
                switch(player.playbackState) {
                case MediaPlayer.PlayingState : player.pause(); break;
                case MediaPlayer.PausedState : player.play(); break;
                case MediaPlayer.StoppedState : player.play(); break;



                }


            }


        }



    }

    Slider {
        id: progressSlider
        width: parent.width
        anchors.bottom: parent.bottom
        enabled: player.seekable
        to:1.0
        value:player.position/player.duration

        background: Rectangle {
            implicitWidth: 8
            color:"white"
            radius:2

            Rectangle {
                width: progressSlider.visualPosition * parent.width
                height: parent.height
                color: "#1D8Bf8"
                radius: 2


            }



        }


        onMoved:player.setPosition(value*player.duration)




    }

    Component.onCompleted: {
        player.play()


    }
}
