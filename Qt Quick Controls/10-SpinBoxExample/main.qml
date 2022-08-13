import QtQuick
import QtQuick.Controls
import QtQuick.Layouts

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    ColumnLayout{
     anchors.centerIn: parent

     SpinBox{
         value: 50
         id:spinbox
         onValueChanged: {
             label.text="You have selected"+spinbox.displayText
         }
     }

     Label{
         id:label
         font.pixelSize: 30
     }
    }



}
