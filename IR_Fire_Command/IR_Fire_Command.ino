#include <IRremote.hpp>

const int irPin = 3; // Pin connected to the IR transmitter
IRsend irsend;

void setup() {
    Serial.begin(9600); // Start serial communication
    irsend.begin(irPin); // Specify the pin for the IR transmitter
}

void loop() {
    if (Serial.available() > 0) {
        String command = Serial.readStringUntil('\n');
        if (command == "FIRE") {
            irsend.sendNEC(0x0, 0x1C, 1); // Send "fire/ok" command
        } else if (command == "DOWN") {
            irsend.sendNEC(0x0, 0x1D, 1); // Send "down" command
        } else if (command == "LEFT") {
            irsend.sendNEC(0x0, 0x1E, 1); // Send "left" command
        } else if (command == "RIGHT") {
            irsend.sendNEC(0x0, 0x1F, 1); // Send "right" command
        } else if (command == "UP") {
            irsend.sendNEC(0x0, 0x20, 1); // Send "ok" command
        }
    }
}