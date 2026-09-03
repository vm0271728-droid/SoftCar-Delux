#pragma once

#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/core/class_db.hpp>

namespace godot {

class VehicleController : public Node {
    GDCLASS(VehicleController, Node)

private:
    double throttle = 0.0;
    double steer = 0.0;
    bool handbrake = false;

protected:
    static void _bind_methods();

public:
    void set_throttle(double value);
    void set_steer(double value);
    void set_handbrake(bool enabled);

    double get_throttle() const { return throttle; }
    double get_steer() const { return steer; }
    bool get_handbrake() const { return handbrake; }
};

}
