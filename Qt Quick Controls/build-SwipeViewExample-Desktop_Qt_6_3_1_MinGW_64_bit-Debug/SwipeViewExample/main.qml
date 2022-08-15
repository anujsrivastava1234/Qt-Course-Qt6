import QtQuick
import QtQuick.Controls
import QtQuick.Layouts
Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Swipe View")

    SwipeView{
        id:view
        currentIndex: 1
        anchors.fill: parent

        Item{
            id:firstPage
            Label{
                text: "FIrst Page"
                anchors.centerIn: parent
                font.pixelSize: 20
            }
        }
        Item{
            id:secondPage
            Label{
                text: "Second Page"
                anchors.centerIn: parent
                font.pixelSize: 20
            }
        }
        Item{
            id:thirdPage
            Label{
                text: "third Page"
                anchors.centerIn: parent
                font.pixelSize: 20
            }
        }
    }
    PageIndicator{
        id:indicator
        count:view.count
        currentIndex: view.currentIndex

        anchors.bottom: view.bottom
        anchors.horizontalCenter: parent.horizontalCenter
    }
}
