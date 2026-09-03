extends CanvasLayer

signal accelerate_pressed
signal brake_pressed
signal reverse_pressed
signal steer_left_pressed
signal steer_right_pressed

func _on_gas_pressed():
	accelerate_pressed.emit()

func _on_brake_pressed():
	brake_pressed.emit()

func _on_reverse_pressed():
	reverse_pressed.emit()

func _on_left_pressed():
	steer_left_pressed.emit()

func _on_right_pressed():
	steer_right_pressed.emit()
