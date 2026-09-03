#pragma once

namespace godot {

struct CarData {
    float mass = 1200.0f;
    float engine_power = 150.0f;
    float max_speed = 60.0f;
    float grip = 1.0f;
    float drift_factor = 0.3f;
    int gears = 5;
};

}
