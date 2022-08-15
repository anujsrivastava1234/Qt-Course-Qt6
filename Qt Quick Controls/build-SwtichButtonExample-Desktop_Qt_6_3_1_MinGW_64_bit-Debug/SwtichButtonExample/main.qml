import QtQuick
import QtQuick.Controls
import QtQuick.Layouts
Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Switch Example")

    ColumnLayout{

        Switch{
            text: "Wi-FI"
        }
        Switch{
            text: "Bluetooth"
            id:control
            contentItem: Text{
                text: control.text
                font:control.font
                opacity: enabled ? 1.0 : 0.3
                color: control.down ? "#17a81a" : "21be2b"
                verticalAlignment: Text.AlignVCenter
                leftPadding: control.indicator.width + control.spacing
            }
            indicator: Rectangle{
                implicitWidth: 48
                implicitHeight: 26
                radius: 13
                color:control.checked ? "#17a81a":"#ffffff"
                border.color: "green"

                Rectangle{
                    x:control.checked ?  parent.width-width:0
                    width: 26
                    height: 26
                    radius: 13
                    color:control.checked?"#cccccc":"#ffffff"
                    border.color: "green"
                }
            }

    }

}

}
