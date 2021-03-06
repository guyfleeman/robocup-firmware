#pragma once

#include "modules/GenericModule.hpp"
#include "MicroPackets.hpp"

#include "motion-control/DribblerController.hpp"
#include "motion-control/RobotController.hpp"
#include "motion-control/RobotEstimator.hpp"

#include <Eigen/Dense>

class MotionControlModule : public GenericModule {
public:
    // How many times per second this module should run
    static constexpr float freq = 200.0f; // Hz
    static constexpr uint32_t period = static_cast<uint32_t>(1000000L / freq);

    // How long a single call to this module takes
    static constexpr uint32_t runtime = 133; // us

    MotionControlModule(BatteryVoltage *const batteryVoltage,
                        IMUData *const imuData,
                        MotionCommand *const motionCommand,
                        MotorFeedback *const motorFeedback,
                        MotorCommand *const motorCommand);

    virtual void entry(void);

private:
    /**
     * Checks the update time versus the current time and timout given below
     */
    bool isRecentUpdate(uint32_t lastUpdateTime);

    BatteryVoltage *const batteryVoltage;
    IMUData *const imuData;
    MotionCommand *const motionCommand;
    MotorFeedback *const motorFeedback;
    MotorCommand *const motorCommand;

    DribblerController dribblerController;
    RobotController robotController;
    RobotEstimator robotEstimator;

    Eigen::Matrix<double, 4, 1> prevCommand;

    /**
     * Max amount of time that can elapse from the latest
     * command from the radio
     * 
     * This is a safety feature to prevent the motors from moving
     * if the motion control dies
     */
    static constexpr uint32_t COMMAND_TIMEOUT = 250; // ms
};
