import QtQuick
import QtQuick.Controls
import QtQuick.Layouts
Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Drawer Width")

    Drawer{
        id:drawwer
        width: 0.6*parent.width
        height: parent.height


        background: Rectangle{
            x:parent.width -1
            width: 1
            height: parent.height
            color:"White"

        }

        Label{
            text: "Welcome to Qt6 Creator"
            anchors.centerIn:parent
            font.pixelSize: 20

            transform:Translate{
                x:drawer.position*content.width*0.33
            }
        }

    }
}
