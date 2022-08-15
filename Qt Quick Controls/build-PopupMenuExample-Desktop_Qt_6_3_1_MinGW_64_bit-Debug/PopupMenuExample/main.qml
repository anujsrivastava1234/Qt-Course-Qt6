import QtQuick
import QtQuick.Controls
import QtQuick.Layouts 1
Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    Button{
        id:fileButton
        text:"File"
        onClicked: menu.open()

        Menu{
            id:menu
            y:fileButton.height

            MenuItem{
                text:"New"
            }
            MenuItem{
                text:"Open"
            }
            MenuItem{
                text:"Save"
            }
        }


    }
}
