import serial
import time

arduino = serial.Serial('COM3', 9600)
time.sleep(2)

arduino.write(b'Hello Arduino\n')
data = arduino.readline()
print(data.decode())
