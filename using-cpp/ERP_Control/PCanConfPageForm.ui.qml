import QtQuick 2.11
import QtQuick.Controls 2.4
import Qt.labs.calendar 1.0
import QtQuick.Layouts 1.0

Page {
    id: page
    width: 1280
    height: 720

    readonly property int steer_MIN_ANGLE: -28
    readonly property int steer_MAX_ANGLE: 28
    readonly property int speed_MIN: 0
    readonly property int speed_MAX: 20
    readonly property int brake_MIN: 0
    readonly property int brake_MAX: 100

    //Enable
    property alias activeCAN: switchActive.checked
    property alias autoControl: switchAuto.checked
    property alias estopControl: switchEstop.checked
    property alias steerControl: switchSteerControl.checked
    property alias speedControl: switchSpeedControl.checked
    property alias ignOvr: checkIgnOvr.checked

    // GEAR
    property alias gearDrive: rbuttonDrive.checked
    property alias gearNeutral: rbuttonNeutral.checked
    property alias gearReverse: rbuttonReverse.checked

    // Value
    property alias steerAngle: spinBoxSteerAngle.value
    property alias speed: sliderSpeed.value
    property alias brake: sliderBrake.value
//    property alias mode : switchAuto.checked

    header: Label {
        text: qsTr("ERP42 Control Panel")
        horizontalAlignment: Text.AlignHCenter
        font.pixelSize: Qt.application.font.pixelSize * 2
    }

    Switch {
        id: switchActive
        x: 20
        y: 6
        text: qsTr("Active")
    }

    Column {
        x: 20
        y: 46
        width: 550
        height: 100
        spacing: 10

        Row {
            width: 550
            height: 30
            spacing: 20

            Switch {
                id: switchAuto
                enabled: switchActive.checked
                text: qsTr("AUTO")
                anchors.verticalCenter: parent.verticalCenter
            }

            Switch {
                id: switchEstop
                enabled: switchActive.checked
                text: qsTr("ESTOP")
                anchors.verticalCenter: parent.verticalCenter
            }
        }

        Row {
            width: 550
            height: 30
            spacing: 20

            Switch {
                id: switchSteerControl
                enabled: switchActive.checked
                text: qsTr("Steer Control")
                anchors.verticalCenter: parent.verticalCenter
            }

            Switch {
                id: switchSpeedControl
                enabled: switchActive.checked
                text: qsTr("Speed Control")
                anchors.verticalCenter: parent.verticalCenter
            }

            CheckBox {
                id: checkIgnOvr
                enabled: switchActive.checked
                text: qsTr("Ignore")
                anchors.verticalCenter: parent.verticalCenter
            }
        }

        Row {
            width: 550
            height: 30
            spacing: 20

            Text {
                id: textGear
                text: qsTr("GEAR")
                anchors.verticalCenter: parent.verticalCenter
            }

            RadioButton {
                id: rbuttonDrive
                enabled: switchActive.checked
                text: qsTr("DRIVE")
            }

            RadioButton {
                id: rbuttonNeutral
                enabled: switchActive.checked
                text: qsTr("NEUTRAL")
            }
            RadioButton {
                id: rbuttonReverse
                enabled: switchActive.checked
                text: qsTr("REVERSE")
            }
        }
    }

    Row {
        x: 22
        y: 200
        width: 605
        height: 280

        Column {
            id: columnSteerAngle
            width: 200
            height: 280
            spacing: 10

            Text {
                text: qsTr("Steer Angle[deg]")
                anchors.horizontalCenter: parent.horizontalCenter
                font.pixelSize: 12
            }

            SpinBox {
                id: spinBoxSteerAngle
                editable: true
                stepSize: 1
                from: steer_MIN_ANGLE
                to: steer_MAX_ANGLE
                value: dialSteerAngle.value
                anchors.horizontalCenter: parent.horizontalCenter
            }

            Dial {
                id: dialSteerAngle
                width: 200
                height: 200
                inputMode: Dial.Circular
                stepSize: 1
                wheelEnabled: true
                from: steer_MIN_ANGLE
                to: steer_MAX_ANGLE
                value: dialSteerAngle.value //steerAngle
                anchors.horizontalCenter: parent.horizontalCenter
                Text {
                    id: textsteerMin
                    text: "-28"
                    anchors.bottom: parent.bottom
                    anchors.left: parent.left
                    font.pixelSize: 12
                }

                Text {
                    id: textsteerMax
                    text: "28"
                    anchors.bottom: parent.bottom
                    anchors.right: parent.right
                    font.pixelSize: 12
                }
            }
        }

        Column {
            id: columnSpeed
            width: 200
            height: 280
            Text {
                id: textSpeed
                text: qsTr("Speed[KPH]")
                font.pixelSize: 12
                anchors.horizontalCenter: parent.horizontalCenter
            }

            SpinBox {
                id: spinBoxSpeed
                to: speed_MAX
                from: speed_MIN
                editable: true
                stepSize: 1
                value: pcanManager.Speed
                anchors.horizontalCenter: parent.horizontalCenter
            }

            Slider {
                id: sliderSpeed
                to: speed_MAX
                from: speed_MIN

                anchors.horizontalCenter: parent.horizontalCenter
                stepSize: 1
                orientation: Qt.Vertical
                value: pcanManager.Speed

                Text {
                    text: "0"
                    anchors.bottom: parent.bottom
                    anchors.left: parent.right
                    font.pixelSize: 12
                }

                Text {
                    text: "20"
                    anchors.top: parent.top
                    anchors.left: parent.right
                    font.pixelSize: 12
                }
            }

            spacing: 10
        }

        Column {
            id: columnAccel
            width: 200
            height: 280
            spacing: 10

            Text {
                text: qsTr("Brake")
                anchors.horizontalCenter: parent.horizontalCenter
                font.pixelSize: 12
            }

            SpinBox {
                id: spinBoxBrake
                to: brake_MAX
                from: brake_MIN
                value: sliderBrake.value
                stepSize: 1
                anchors.horizontalCenter: parent.horizontalCenter
                editable: true
            }

            Slider {
                id: sliderBrake
                to: brake_MAX
                from: brake_MIN
                anchors.horizontalCenter: parent.horizontalCenter
                stepSize: 1
                orientation: Qt.Vertical
                value: pcanManager.Brake
                Text {
                    text: "0"
                    anchors.bottom: parent.bottom
                    anchors.left: parent.right
                    font.pixelSize: 12
                }

                Text {
                    text: "100"
                    anchors.top: parent.top
                    anchors.left: parent.right
                    font.pixelSize: 12
                }
            }
        }
    }

    Text {
        id: textRawData
        x: 630
        y: 25
        text: qsTr("Console Output")
        font.pixelSize: 12
    }

    TextArea {
        id: textAreaRawData
        x: 630
        y: 55
        width: 573
        height: 44
        text: qsTr(canManager.TextArea)
        renderType: Text.NativeRendering
        verticalAlignment: Text.AlignTop
        textFormat: Text.AutoText
        wrapMode: Text.WrapAnywhere
        readOnly: true

        //            TextEdit: canManager.TextArea
    }



    Row {
        id: row5
        x: 22
        y: 517
        width: 800
        height: 100
        spacing: 20

        //        anchors.horizontalCenter: parent.horizontalCenter
        //            x: 12
        //            y: 400
        //            width: 624
        //            height: 40
        //        spacing: 42
        Column{
            width: 50
            height: 50
            spacing: 10

            Text {

                id: text1
                width: 50
                horizontalAlignment: Text.AlignHCenter
                text: qsTr("AorM")
            }
            TextArea{
                width: 50
                height: 30
                text: qsTr(pcanManager.QMorA)
            }
        }
        Column{
            width: 50
            height: 50
            spacing: 10
            Text {
                id: text2
                width: 50
                horizontalAlignment: Text.AlignHCenter
                text: qsTr("E-STOP")
            }
            TextArea{
                width: 50
                height: 30

            }
        }
        Column{
            width: 50
            height: 50
            spacing: 10
            Text {
                id: text3
                width: 50
                horizontalAlignment: Text.AlignHCenter
                text: qsTr("GEAR")
            }
            TextArea{
                width: 50
                height: 30

            }
        }
        Column{
            width: 100
            height: 50
            spacing: 10
            Text {
                id: text4
                width: 100
                horizontalAlignment: Text.AlignHCenter
                text: qsTr("Speed")
            }
            TextArea{
                width: 100
                height: 30
                text: qsTr(pcanManager.QMorA)

            }
        }
        Column{
            width: 100
            height: 50
            spacing: 10

            Text {
                id: text5
                width: 100
                horizontalAlignment: Text.AlignHCenter
                text: qsTr("Steer")

            }
            TextArea{
                width: 100
                height: 30
            }
        }
        Column{
            width: 100
            height: 50
            spacing: 10
            Text {
                id: text6
                width: 100
                horizontalAlignment: Text.AlignHCenter
                text: qsTr("Brake")
            }
            TextArea{
                width: 100
                height: 30

            }
        }
        Column{
            width: 50
            height: 50
            spacing: 10
            Text {
                id: text7
                width: 50
                horizontalAlignment: Text.AlignHCenter
                text: qsTr("Alive")
            }
            TextArea{
                width: 50
                height: 30
            }
        }
    }
}

