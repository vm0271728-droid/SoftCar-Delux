#pragma once

#include <godot_cpp/classes/node2d.hpp>

namespace godot {

class VehiclePhysics : public Node2D {
    GDCLASS(VehiclePhysics, Node2D)

private:
    float engine_power = 120.0f;
    float max_speed = 55.0f;
    float grip = 1.0f;
    float drift_factor = 0.2f;

protected:
    static void _bind_methods();

public:
    VehiclePhysics();
    void accelerate(float input);
    void brake(float input);
    void steer(float input);
    void handbrake(bool active);
};

}
