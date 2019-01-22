#!/usr/bin/python
import serial
import time

arduino = serial.Serial('/dev/ttyACM0',9600)


muuttaja = 'B'
command = muuttaja.encode('utf-8')
arduino.write(command)   
print("Content-type: text/html\n\n")
