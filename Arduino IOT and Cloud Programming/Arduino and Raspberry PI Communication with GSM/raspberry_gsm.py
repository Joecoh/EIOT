import serial
import time

gsm = serial.Serial('/dev/ttyUSB0', 9600, timeout=1)
time.sleep(2)
gsm.write(b'AT+CMGF=1\r')
time.sleep(1)
gsm.write(b'AT+CMGL="ALL"\r')
time.sleep(2)
messages = gsm.readlines()
for msg in messages:
    print(msg.decode().strip())
