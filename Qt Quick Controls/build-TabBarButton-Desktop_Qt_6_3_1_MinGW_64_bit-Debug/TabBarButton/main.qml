import QtQuick
import QtQuick.Controls
import QtQuick.Layouts

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    TabBar{
        anchors.centerIn:parents

        TabButton{
            id:python
            text:"Python"
            width: 80
            height: 50
        }
        TabButton{
            id:cpp
            text:"cpp"
            width: 80
            height: 50
        }
        TabButton{
            id:java
            text:"java"
            width: 80
            height: 50
        }

    }

