import QtQuick
import QtQuick.Layouts
import QtQuick.Controls
Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("CheckBox")

    ColumnLayout{
        anchors.centerIn: parent

        CheckBox{
            id:check1
            text:"C++"
            font.pixelSize: 15
            onClicked: {
                label.text=check1.text
            }

        }
        CheckBox{
            id:check2
            text:"Java"
            font.pixelSize: 15
            onClicked: {
                label.text=check2.text
            }
        }
        CheckBox{
            id:check3
            text:"Python"
            font.pixelSize: 15
            onClicked: {
                label.text=check3.text
            }

        }

        Label{
            id:label
            text:" "

            font.pixelSize: 20
        }
    }


}
