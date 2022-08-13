import QtQuick

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    Text {
        id: text1
        text: "Welcome to qt6 creator"
        x:50
        y:50
        color: "red"
        font.family: "Times"
        font.pixelSize: 28
    }
}
