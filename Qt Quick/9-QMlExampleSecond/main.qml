import QtQuick

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    Image {
        id: image
        x: -54
        y: 592
        width: 295
        height: 297
        source: "ww.png"
        fillMode: Image.Stretch
    }

    Text {
        id: text1
        x: 240
        y: 96
        color: "#1fd135"
        text: qsTr("Welcome ")
        font.pixelSize: 30
        horizontalAlignment: Text.AlignHCenter
        font.family: "Arial"
    }
}
