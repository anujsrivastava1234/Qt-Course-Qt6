import QtQuick
import QtQuick.Controls

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Context Menu")

    MouseArea{
        anchors.fill:parent
        acceptedButtons: Qt.LeftButton | Qt.RightButton

        onClicked: (mouse)=>{
                       if(mouse.button===Qt.RightButton)
                       contextMenu.popup()
                   }
        Menu{
            id:contextMenu
            MenuItem{text:"Cut"}
            MenuItem{text:"Copy"}
            MenuItem{text:"Paste"}
        }
    }
}
