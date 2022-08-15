import QtQuick
import QtQuick.Controls
import QtQuick.Layouts
Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Scroll View")

    ScrollView{
        width: parent.width
        height: parent.height

//        Label{
//            text: "Qt6 Course "
//            font.pixelSize: 222
//        }

        ListView{
            model:20
            delegate: ItemDelegate{
                text: "Item"+index

                required property int index
            }
        }

    }

}
