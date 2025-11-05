import serial
import csv

arduino = serial.Serial('/dev/ttyUSB0', 9600)

with open('data_log.csv', 'w', newline='') as file:
    writer = csv.writer(file)
    writer.writerow(['SensorValue'])

    for i in range(10):
        value = arduino.readline().decode().strip()
        writer.writerow([value])
