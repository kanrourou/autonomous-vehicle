import RPi.GPIO as io
io.setmode(io.BCM)

# for left motor 
in1_pin = 4
in2_pin = 17
# for right motor
in3_pin = 23
in4_pin = 24
 
io.setup(in1_pin, io.OUT)
io.setup(in2_pin, io.OUT)
io.setup(in3_pin, io.OUT)
io.setup(in4_pin, io.OUT)
 
def set(pwm_num, property, value):
	try:
        f = open("/sys/class/rpi-pwm/pwm" + pwm_num + "/" + property, 'w')
        f.write(value)
        f.close()  
    except:
        print("Error writing to: " + pwm_num + " " + property + " value: " + value)

def motor_setup():		
	for i in range(0, 2):
		set(i, "delayed", "0")
		set(i, "mode", "pwm")
		set(i, "frequency", "500")
		set(i, "active", "1")
 
def clockwise(motor):
	if motor == "left":
		io.output(in1_pin, True)   
		io.output(in2_pin, False)
	elif motor == "right"
		io.output(in3_pin, True)   
		io.output(in4_pin, False)
 
def counter_clockwise(motor):
	if motor == "left":
		io.output(in1_pin, False)
		io.output(in2_pin, True)
	elif motor == "right"
		io.output(in3_pin, False)
		io.output(in4_pin, True)
		
def stop(motor):
	if motor == "left":
		io.output(in1_pin, False)
		io.output(in2_pin, False)
	elif motor == "right"
		io.output(in3_pin, False)
		io.output(in4_pin, False)
 
while True:
    cmd = raw_input("Command, l/r f/r 0..9, E.g. lf5 :")
	which = cmd[0]
	if which == "l"
		which = "left"
	else:
		which = "right"
    direction = cmd[1]
    if direction == "f":
        clockwise(which)
    else:
        counter_clockwise()
    speed = int(cmd[2]) * 11
	if which == "left":
		set(0, "duty", str(speed))
	else:
		set(1, "duty", str(speed))

