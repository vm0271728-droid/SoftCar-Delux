extends Node

signal vehicle_input_changed(throttle: float, steer: float, brake: float, reverse: bool, handbrake: bool)

var throttle := 0.0
var steer := 0.0
var brake := 0.0
var reverse := false
var handbrake := false

func set_throttle(value: float) -> void:
    throttle = clamp(value, 0.0, 1.0)
    _emit_input()

func set_steer(value: float) -> void:
    steer = clamp(value, -1.0, 1.0)
    _emit_input()

func set_brake(value: float) -> void:
    brake = clamp(value, 0.0, 1.0)
    _emit_input()

func set_reverse(value: bool) -> void:
    reverse = value
    _emit_input()

func set_handbrake(value: bool) -> void:
    handbrake = value
    _emit_input()

func _emit_input() -> void:
    vehicle_input_changed.emit(throttle, steer, brake, reverse, handbrake)
