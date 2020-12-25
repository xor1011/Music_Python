#Jingle Bells on a pwm buzzer

import RPi.GPIO as GPIO
import time

GPIO.setmode(GPIO.BCM)
GPIO.setup(13, GPIO.OUT)
p=GPIO.PWM(13, 100)
#c6 higher pitches sound better

c=1046.5
d=1174.66
e=1318.51
f=1396.91
g=1567.98
a=1760
b=1975.53


GPIO.output(13, True) #use the pwm pin of your choice I used pin 33 GPIO 13
p.start(3.3)#make 5 for 5 volt outputs
#most basic note function. 
def playNote(na, nd):
    p.ChangeFrequency(na)
    time.sleep(nd)
    p.ChangeFrequency(150)#Guess and test. This worked best with these frequencies.
    time.sleep(.03) #Guess and test. This sounded best with this time signature 4/4
#Jingle Bells Line 1
playNote(e,.25)
playNote(e,.25)
playNote(e,.50)


playNote(e,.25)
playNote(e,.25)
playNote(e,.50)

playNote(e, .25)
playNote(g, .25)
playNote(c, .125)
playNote(d, .25)

playNote(e, 1)

#Line 2
playNote(f, .25)
playNote(f, .25)
playNote(f, .25)
playNote(f, .25)

playNote(f, .25)
playNote(e, .25)
playNote(e, .25)
playNote(e, .25)

playNote(e, .25)
playNote(d, .25)
playNote(d, .25)
playNote(e, .25)

playNote(d, .50)
playNote(g, .50)

#Line 3 could function or copy and paste line 1
playNote(e,.25)
playNote(e,.25)
playNote(e,.50)


playNote(e,.25)
playNote(e,.25)
playNote(e,.50)

playNote(e, .25)
playNote(g, .25)
playNote(c, .125)
playNote(d, .25)

playNote(e, 1)

#line 4
playNote(e, .25)
playNote(e, .25)
playNote(e, .25)
playNote(e, .25)

playNote(f, .25)
playNote(e, .25)
playNote(e, .25)
playNote(e, .25)

playNote(g, .25)
playNote(g, .25)
playNote(f, .25)
playNote(d, .25)

playNote(c, 1)

p.stop()
GPIO.cleanup()





