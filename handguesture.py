import serial         #Serial imported for Serial communication
import time           #Required to use delay functions
import pyautogui      #To perform actions on our computer we use Python pyautogui library.

ArduinoSerial = serial.Serial('com18',9600) 

# Create Serial port object called arduinoSerialData
# wait for 2 seconds for the communication to get established
time.sleep(2)
while 1:
    incoming = str (ArduinoSerial.readline())  # ...read the serial data and print it as line
    print incoming
    
    if 'Play/Pause' in incoming:
        pyautogui.typewrite(['space'], 0.2)

    if 'Rewind' in incoming:
        pyautogui.hotkey('ctrl', 'left')  

    if 'Forward' in incoming:
        pyautogui.hotkey('ctrl', 'right') 

    if 'Vup' in incoming:
        pyautogui.hotkey('ctrl', 'down')
        

    if 'Vdown' in incoming:
        pyautogui.hotkey('ctrl', 'up')

    incoming = "";
