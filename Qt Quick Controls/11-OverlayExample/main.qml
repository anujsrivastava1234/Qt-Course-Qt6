import QtQuick
import QtQuick.Controls
import QtQuick.Layouts
Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    ColumnLayout{


        Button{
            id:change
            text: "Click Me"
            onClicked: popup.open()
        }

        Popup{
            id:popup
            width: 400
            height: 400
            modal:true
//            visible: true

            Overlay.modal: Rectangle{
                color:"lightsteelblue"
            }
        }
    }

}
