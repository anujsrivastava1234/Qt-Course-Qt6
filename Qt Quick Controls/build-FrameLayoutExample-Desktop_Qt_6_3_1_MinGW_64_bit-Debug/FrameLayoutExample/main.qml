//import QtQuick
import QtQuick.Controls
import QtQuick.Layouts
ApplicationWindow {
    width: 640
    height: 480
    visible: true
    title: qsTr("Frame Layout")

    Frame{

        ColumnLayout{
            anchors.fill: parent
            CheckBox{text:"Python"}
            CheckBox{text:"CPP"}
            CheckBox{text:"Java"}
        }

    }
}
