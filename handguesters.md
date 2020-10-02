** CONTROLLING VOLUME OR AUDIO USING PYTHON AND ARDUINO

Gesture controlled Laptops or computers are getting very famous. This technique is called Leap motion
which enables us to control certain functions on our computer/Laptop by simply waving our hand in front of it. 
It is very cool and fun to do it, but these laptops are really priced very high. So in this project let us try
building our own Gesture control Laptop/Computer by combining the Power of Arduino and Python.

** CONCEPT BEHIND THE PROJECT

The concept behind the project is very simple. We will place two Ultrasonic (US) sensors on top of our monitor and will read
the distance between the monitor and our hand using Arduino, based on this value of distance we will perform certain actions. 
To perform actions on our computer we use Python pyautogui library. The commands from Arduino are sent to the computer through serial port (USB). 
This data will be then read by python which is running on the computer and based on the read data an action will be performed.

**PROGRAMMING ARDUINO

The Arduino should be programmed to read the distance of hand from the US sensor. The complete program is given in the 
CODE FILE;just below I have given the explanation for the program. If you are new to Ultrasonic sensor, just go 
through LINK--https://circuitdigest.com/microcontroller-projects/arduino-ultrasonic-sensor-based-distance-measurement.

**ACTION:
   
When left hand is placed up before the sensor at a particular near distance and then if moved towards the sensor
the volume of video should increase and if moved away the volume should Decrease.
