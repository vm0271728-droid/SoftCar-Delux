extends RigidBody2D

# Base 2D vehicle physics prototype
# Parameters are loaded from vehicle_classes.json

var engine_power = 0.0
var max_speed = 0.0
var grip = 0.8
var drift_factor = 0.4

func apply_engine(throttle: float):
    var force = transform.x * throttle * engine_power
    apply_central_force(force)

func apply_brake(amount: float):
    linear_velocity = linear_velocity.move_toward(Vector2.ZERO, amount)

func apply_drift(handbrake: bool):
    if handbrake:
        grip *= 0.5
    else:
        grip = clamp(grip, 0.0, 1.0)

func calculate_slip():
    # Placeholder for tire slip model
    # Based on longitudinal and lateral slip concepts
    pass
