import QtQuick
import QtQuick.Controls
import QtQuick.Layouts
ApplicationWindow {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")


    menuBar:MenuBar{
        Menu{
            title:"File"
            Action{text:"New"}
            Action{text:"Open"}
            Action{text:"Save"}
            Action{text:"Save As"}
        }
        Menu{
            title:"Edit"
            Action{text:"Cut"}
            Action{text:"Copy"}
            Action{text:"Paste"}
        }
        Menu{
            title:"Help"
            Action{text:"About"}
        }
    }
}
