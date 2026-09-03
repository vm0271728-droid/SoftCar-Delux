extends CanvasLayer

# SoftCar Delux vehicle controls prototype
# Inputs reserved:
# left
# right
# gas
# reverse
# handbrake

signal throttle_pressed
signal brake_pressed
signal steering_changed(value)
signal handbrake_pressed

func _ready():
    pass
