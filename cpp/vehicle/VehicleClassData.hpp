#pragma once

struct VehicleClassData {
    const char* name;
    float mass;
    float power;
    float max_speed;
    int gears;
    float grip;
    float drift;
};

static VehicleClassData vehicles[] = {
    {"compact", 1100, 110, 48, 5, 1.0f, 0.15f},
    {"sport", 1350, 350, 85, 6, 0.9f, 0.45f},
    {"pickup", 2100, 220, 60, 6, 0.75f, 0.25f}
};
