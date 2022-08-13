import QtQuick
import QtQuick.Controls
import QtQuick.Layouts
Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    TabBar{
        id:bar
        width: parent.width

        TabButton{
            id:python
            text:"Python"
        }
        TabButton{
            id:cpp
            text:"cpp"
        }
        TabButton{
            id:java
            text:"java"
        }
    }

    StackLayout{
        width: parent.width
        currentIndex: bar.currentIndex
        Item {
            id: pythonTab
        }
        Item {
            id: cppTab
        }
        Item {
            id: javaTab
        }
    }
}
