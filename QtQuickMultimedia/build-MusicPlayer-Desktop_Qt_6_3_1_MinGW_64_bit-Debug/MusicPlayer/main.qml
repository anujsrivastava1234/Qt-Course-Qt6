import QtQuick
import QtQuick.Controls
import QtMultimedia
ApplicationWindow {
    width: 640
    height: 480
    visible: true
    title: qsTr("Music Player")

    MediaPlayer{
        id:player
        source:"qrc:res/song.mp3"
        audioOutput: AudioOutput{}
    }
    Component.onCompleted: {
        player.play();
    }
}
