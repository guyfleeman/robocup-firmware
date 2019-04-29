#include "RobotController.hpp"
#include <Eigen/QR>

namespace motion {

RobotController::RobotController() {
    RobotModel model;

    // From python
    K = (Matrix<3, 6>() <<
        0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0
    ).finished();
}

MotorVoltage RobotController::calculate(
            RobotPose x, RobotTwist v,
            RobotPose rx, RobotTwist rv, RobotTwist ra) {
    // Rotate error into the body frame for control.
    Matrix<3> R = make_rotation_matrix(-x(2));

    Vector<6> error_body = pack_pose_velocity(R * (rx - x), R * (rv - v));

    // Bound the angle on error body so we don't try to do things like
    // spinning 360 degrees when we're already in the right place, or spinning
    // "the slow way" to get to a target (we only care about goal angle mod 360)
    error_body(2) = bound_angle(error_body(2));

    // Calculate acceleration and rotate back into body space.
    RobotTwist goal_acceleration_world = ra + R.transpose() * K * error_body;

    // TODO(Kyle): Limit acceleration so -wheel accel max <= Ga <= wheel accel max

    return model.inverse_dynamics_world(x, v, goal_acceleration_world);
}

}
