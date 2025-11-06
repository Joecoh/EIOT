import serial
import time
import requests

ser = serial.Serial('/dev/ttyUSB0', 9600)
url = 'https://api.thingspeak.com/update?api_key=YOUR_API_KEY'

while True:
    if ser.in_waiting > 0:
        data = ser.readline().decode().strip()
        requests.get(url + '&field1=' + data)
        print('Uploaded:', data)
        time.sleep(15)
