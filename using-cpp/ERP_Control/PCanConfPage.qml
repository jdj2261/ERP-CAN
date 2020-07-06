import QtQuick 2.0
import unmansol.erp42.pcanmanager 0.1

PCanConfPageForm {
    //FIXIT: Bidirectional binding.
    onActiveCANChanged: {
        pcanManager.Active = activeCAN
    }
    onSteerControlChanged: {
        pcanManager.EpsEnable = steerControl
    }
    onAccelControlChanged: {
        pcanManager.AccEnable = accelControl
    }
    onSteerIgnOvrChanged: {
        pcanManager.EpsOverrideIgnore = steerIgnOvr
    }
    onSteerAngleChanged: {
        pcanManager.SteerAngle = steerAngle
    }
    onSpeedChanged: {
        pcanManager.Speed = speed
    }
    onAccelChanged: {
        pcanManager.VehicleAccel = accel
    }
}
