import RPi.GPIO as GPIO
from time import sleep
GPIO.setmode(GPIO.BOARD)
button = 13
LED = 7
GPIO.setup(button,GPIO.IN,pull_up_down = GPIO.PUD_UP)
GPIO.setup(LED,GPIO.OUT)
switch = False
while(1):
    if GPIO.input(button) == 0:
        print "The button was pressed"
        if switch == False:
            GPIO.output(LED,True)
            switch = True
            sleep(.5)
        else:
            GPIO.output(LED, False)
            switch = False
            sleep(.5)
GPIO.cleanup()
