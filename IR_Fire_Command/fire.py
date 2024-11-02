import serial
import time

# Set up the serial connection to the Arduino
ser = serial.Serial('/dev/ttyUSB0', 9600)  # Arduino's port speed, rate < required to IRremote Recievedump
time.sleep(2)  # Wait for the connection to establish

# Commands to send
commands = ["FIRE"]

# Send each command
for command in commands:
    print(f"Sending command: {command}")
    ser.write((command + '\n').encode())  # Send command with newline
    time.sleep(1)  # Wait a bit between commands

# Close the serial connection
ser.close()

