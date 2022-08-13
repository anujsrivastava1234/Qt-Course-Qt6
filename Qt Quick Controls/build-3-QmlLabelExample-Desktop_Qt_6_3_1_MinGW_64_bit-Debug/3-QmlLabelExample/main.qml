import QtQuick
import QtQuick.Controls 2.5
Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    Label{
        text: "Welcome"
        font.pixelSize: 20
        font.italic: true
        x:20
        y:20
        color: "red"
    }
}
