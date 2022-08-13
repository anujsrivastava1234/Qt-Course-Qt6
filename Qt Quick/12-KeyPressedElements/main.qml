import QtQuick

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    Rectangle{
        id:rect
        y:40
        x:20
        width:100
        height: 100
        color: "red"

        focus: true
        Keys.onUpPressed: rect.y -=10
        Keys.onDownPressed: rect.y +=10
        Keys.onLeftPressed: rect.x -=10
        Keys.onRightPressed: rect.x +=10
    }
}
