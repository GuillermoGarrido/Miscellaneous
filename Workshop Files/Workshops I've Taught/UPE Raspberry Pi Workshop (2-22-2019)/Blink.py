import RPi.GPIO as GPIO
import time
GPIO.setmode(GPIO.BOARD)  # Set Pi to use pin number when referencing GPIO pins.
GPIO.setup(7, GPIO.OUT)
for x in range(0,3):
    GPIO.output(7,True)
    print "LED on"
    time.sleep(1)
    GPIO.output(7,False)
    print "LED Off"
    time.sleep(1)
GPIO.cleanup()   # resets GPIO ports used back to input mode

#Cleanup() helps protect against short circuits, which could damage your Raspberry Pi or other components. 
#It only affects any ports you have set in the current program. 
#It resets any ports you have used in this program back to input mode.
