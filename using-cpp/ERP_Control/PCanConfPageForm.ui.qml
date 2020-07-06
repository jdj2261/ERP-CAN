import QtQuick 2.11
import QtQuick.Controls 2.4

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

    property alias activeCAN: switchActive.checked
    property alias steerControl: switchSteerControl.checked
    property alias accelControl: switchAccelControl.checked
    property alias steerIgnOvr: checkIgnStrOvr.checked
    property alias steerAngle: dialSteerAngle.value
    property alias speed: sliderSpeed.value
    property alias accel: sliderBrake.value

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
            id: row1
            width: 550
            height: 30
            spacing: 20

            Switch {
                id: switchmode
                enabled: switchActive.checked
                text: qsTr("AUTO")
                anchors.verticalCenter: parent.verticalCenter
            }

            Switch {
                id: switchestop
                enabled: switchActive.checked
                text: qsTr("ESTOP")
                anchors.verticalCenter: parent.verticalCenter
            }
        }

        Row {
            id: row3
            //            x: 20
            //            y: 46
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
                id: switchAccelControl
                enabled: switchActive.checked
                text: qsTr("Speed Control")
                anchors.verticalCenter: parent.verticalCenter
            }

            CheckBox {
                id: checkIgnStrOvr
                //            text: qsTr("Ignore Steer Override")
                text: qsTr("Ignore")
                anchors.verticalCenter: parent.verticalCenter
            }
        }

        Row {
            id: row2
            width: 550
            height: 30
            spacing: 20

            Text {
                id: name
                text: qsTr("GEAR")
                anchors.verticalCenter: parent.verticalCenter
            }

            RadioButton {
                id: radiobutton
                text: qsTr("DRIVE")
            }

            RadioButton {
                id: radiobutton2
                text: qsTr("NEUTRAL")
            }
            RadioButton {
                id: radiobutton3
                text: qsTr("RESERVE")
            }
        }
    }

    Row {
        id: row4
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
                stepSize: 1
                wheelEnabled: true
                from: steer_MIN_ANGLE
                to: steer_MAX_ANGLE
                value: pcanManager.SteerAngle //steerAngle
                anchors.horizontalCenter: parent.horizontalCenter
                Text {
                    id: text4
                    text: "-28"
                    anchors.bottom: parent.bottom
                    anchors.left: parent.left
                    font.pixelSize: 12
                }

                Text {
                    id: text5
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
                id: text3
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
                value: sliderSpeed.value
                anchors.horizontalCenter: parent.horizontalCenter
            }

            Slider {
                id: sliderSpeed
                to: speed_MAX
                from: speed_MIN
                anchors.horizontalCenter: parent.horizontalCenter
                stepSize: 0.1
                orientation: Qt.Vertical
                value: 0

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
                stepSize: 0.1
                orientation: Qt.Vertical
                value: 0
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
        id: text6
        x: 20
        y: 533
        text: qsTr("Console Output")
        font.pixelSize: 12
    }

    TextArea {
        id: textArea
        x: 22
        y: 561
        width: 550
        height: 44
        text: qsTr(canManager.TextArea)
        renderType: Text.NativeRendering
        verticalAlignment: Text.AlignTop
        textFormat: Text.AutoText
        wrapMode: Text.WrapAnywhere
        readOnly: true

        //            TextEdit: canManager.TextArea
    }

    Button {
        id: button
        x: 1110
        y: 552
        width: 143
        height: 63
        text: qsTr("Button")
    }
}
