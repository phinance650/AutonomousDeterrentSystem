# IR Fire Command

This component sends a specific IR "fire" signal from an Arduino-controlled IR transmitter, triggered by a Python script. The setup involves two files:
- `IR_Fire_Command.ino`: An Arduino sketch that listens for a command and then activates the IR transmitter to send a fire signal.
- `fire.py`: A Python script that communicates with the Arduino to initiate the fire command.

## Files

- **IR_Fire_Command.ino**: Arduino sketch to control the IR transmitter and send the fire signal upon receiving a trigger from the Python script.
- **fire.py**: Python script that sends a command to the Arduino to activate the IR fire signal.

## Requirements

### Hardware
- Arduino (e.g., Arduino Uno)
- IR transmitter module
- USB cable to connect Arduino to the computer (Rasberry Pi in development)

### Software
- Arduino IDE for uploading the sketch
- Python 3.x
- `pyserial` library for Python (install with `pip install pyserial`)

## Setup and Usage

1. **Upload the Arduino Sketch**:
   - Connect your Arduino board to the computer.
   - Open `IR_Fire_Command.ino` in the Arduino IDE.
   - Select the correct board and port in the **Tools** menu.
   - Upload the sketch to the Arduino.

2. **Run the Python Script**:
   - Ensure the Arduino is connected to the computer and powered on.
   - Run the Python script to send the fire command to the Arduino.
   
   ```bash
   python3 fire.py
