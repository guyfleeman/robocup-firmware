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

Vector<4> RobotController::calculate(
            RobotPose x, RobotTwist v,
            RobotPose rx, RobotTwist rv, RobotTwist ra) {
    // Rotate error into the body frame for control.
    Matrix<3> R = make_rotation_matrix(-x(2));

    Vector<6> error_body;
    error_body.block<3, 1>(0, 0) = R * (rx - x);
    error_body.block<3, 1>(3, 0) = R * (rv - v);

    // Calculate acceleration and rotate back into body space.
    RobotTwist goal_acceleration_world = ra + R.transpose() * K * error_body;

    // TODO(Kyle): Limit acceleration so -wheel accel max <= Ga <= wheel accel max

    return model.inverse_dynamics_world(x, v, goal_acceleration_world);
}

}