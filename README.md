# Autonomous Deterrent System

The **Autonomous Deterrent System** is my approach to solving some of the subproblems I need to tackle for the larger fully autonomous system.

1. **IR Signal Capture** - Captures and analyzes IR signals from various remotes to identify specific commands. Proof of concept to send fire command [will be replaced with water cannonon Turtlebot]
2. **IR Fire Command** - Sends a "fire" IR signal to trigger a deterrent. [component communication]
3. **Real-Time Image Detection** - Uses computer vision to detect target behavior in real-time. [no custom code; leverages torch]

## Project Structure

- `IR_SIGNAL_CAPTURE/` - Captures and logs IR signals for further analysis.
- `IR_FIRE_COMMAND/` - Sends the deterrent signal upon receiving a command.
- `IMAGE_DETECTION/` - Detects target behaviors using a pre-trained image detection model.

## Requirements

### Hardware
- Arduino board (e.g., Arduino Uno)
- IR receiver and transmitter modules
- Raspberry Pi or other Linux-based system for running Python and machine learning models
- Camera module for real-time image detection

### Software
- Arduino IDE
- Python 3.x
- Required Python libraries (in `requirements.txt`)

## Setup

### 1. Clone the Repository
   ```bash
   git clone https://github.com/phinance650/AutonomousDeterrentSystem.git
   cd AutonomousDeterrentSystem
