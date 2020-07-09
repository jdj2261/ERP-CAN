import QtQuick 2.12
import QtQuick.Controls 2.5
import unmansol.erp42.pcanmanager 0.1
import unmansol.erp42.canmanager 0.1

ApplicationWindow {
    id: root
    visible: true
    width: 1280
    height: 720
    title: qsTr("UNMANNED ERP42 CONTROL")

    PCanManager {
        id: pcan
    }

    CanManager{
        id: canmanager
        frameID: textInputID.text
        frameData: textInputDATA.text
    }

    SwipeView {
        id: swipeView
        anchors.fill: parent
        currentIndex: tabBar.currentIndex

        PCanConfPage {
        }

        Page2Form {
        }
    }

//    ComboBox {
//        id: comboBox1
//        x: 660
//        y: 54
//        model: comboModel.comboList
//        onActivated: {
//            console.log("combomodel activated" + comboBox1.currentIndex)
//            comboModel.currentIndex = comboBox1.currentIndex
//         }

//    }


    Text {
        id: textID
        x: 650
        y: 200
        width: 100
        height: 40
        font.pixelSize: 12
        text: "Frame ID"


    }

    TextField {
        id: textInputID
        x: 630
        y: 220
        width: 100
        height: 40
        font.pixelSize: 12
        placeholderText: "Frame ID"
        validator: RegExpValidator { regExp: /[0-9a-fA-F]{3}/}
    }

    Text {
        id: textData
        x: 880
        y: 200
        width: 100
        height: 40
        font.pixelSize: 12
        text: "DATA"

    }

    TextField {
        id: textInputDATA
        x: 750
        y: 220
        width: 300
        height: 40
        font.pixelSize: 12
        placeholderText: "Data"
        validator: RegExpValidator { regExp: /[0-9a-fA-F]{2}(?: [0-9a-fA-F]{2})+$/}

    }

    Button {
        id: proccessButton
        x: 1070
        y: 220
        width: 70
        height: 40
        text: "Send"
        onClicked: canmanager.buttontest()
    }


    footer: TabBar {
        id: tabBar
        currentIndex: swipeView.currentIndex

        TabButton {
            text: qsTr("PCAN Conf")
        }
        TabButton {
            text: qsTr("Page 2")
        }
    }

//    Button {
//        id: button
//        x: 1110
//        y: 552
//        width: 143
//        height: 63
//        text: qsTr("Button")
//    }


    TextField {
        x: 800
        y: 552
        width: 200
        height: 100
        color: "orange"
        objectName: "test"
        Text {
            id: thetext
            anchors.centerIn: parent
            text: "placeholder"
        }

        MouseArea {
            anchors.fill: parent
            onClicked: print('parent objectName: ' + parent.objectName)
        }

    }

    Connections {
        target: pcanManager
//        onStarted: {
//            print('worker thread started')
//        }

        onDataChanged: {
            print('data changed to: ' + pcanManager.getData() );
            thetext.text = pcanManager.getData();
        }
    }

    Component.onDestruction: pcanManager.terminate();

}

