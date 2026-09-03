#pragma once

namespace godot {

class DamageSystem {
public:
    float body_damage = 0.0f;
    float engine_damage = 0.0f;
    float wheel_damage = 0.0f;

    void apply_impact(float force);
};

}
