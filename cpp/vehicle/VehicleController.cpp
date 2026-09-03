#include "VehicleController.h"

using namespace godot;

void VehicleController::_bind_methods() {
    ClassDB::bind_method(D_METHOD("set_throttle", "value"), &VehicleController::set_throttle);
    ClassDB::bind_method(D_METHOD("set_steer", "value"), &VehicleController::set_steer);
    ClassDB::bind_method(D_METHOD("set_handbrake", "enabled"), &VehicleController::set_handbrake);
}

void VehicleController::set_throttle(double value) {
    throttle = CLAMP(value, 0.0, 1.0);
}

void VehicleController::set_steer(double value) {
    steer = CLAMP(value, -1.0, 1.0);
}

void VehicleController::set_handbrake(bool enabled) {
    handbrake = enabled;
}
