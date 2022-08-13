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

        DialogButtonBox{
            standardButtons:DialogButtonBox.Ok | DialogButtonBox.Cancel

            onAccepted: console.log("Ok cickled")
            onRejected: console.log("Cancel Clicked")
        }
    }
}
