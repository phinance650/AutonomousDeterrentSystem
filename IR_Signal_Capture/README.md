# IR Signal Capture

This component captures IR signals using an Arduino and the `IRremote` library. The captured signals are printed in hexadecimal format, which can be analyzed to replicate or interpret IR commands.

## Sample Output from IRrecvDump

The following is a sample IR signal output captured using the `IRrecvDump` example. This output shows the decoded format, address, command, and raw timing values, which are useful for identifying and re-sending specific IR signals.

```plaintext
Protocol  : NEC
Code      : 0x20DF10EF (32 bits)
Raw Timing[67]:
   +  9000, -  4500, +   600, -  1650, +   600, -  500, +   600, -  500, 
   +   600, -  500, +   600, -  500, +   600, -  500, +   600, - 1650,
   ...
   +   600, -  500, +   600, - 1650, +   600, -  1650, +   600
uint16_t rawData[67] = {9000, 4500, 600, 1650, 600, 500, 600, 500, ... };


## References

1. **IRremote Library Documentation**  
   The `IRremote` library enables Arduino boards to receive and decode IR signals, providing support for various IR protocols. For details on installation and usage, visit the [IRremote GitHub Repository](https://github.com/Arduino-IRremote/Arduino-IRremote).

2. **IRrecvDump Example**  
   The `IRrecvDump` example sketch, included with the `IRremote` library, allows for capturing and decoding IR signals. This sketch can be accessed in the Arduino IDE under **File > Examples > IRremote > IRrecvDump**.

3. **Arduino IDE Library Guide**  
   For help on managing libraries in the Arduino IDE, refer to the [Arduino Library Guide](https://www.arduino.cc/en/Guide/Libraries).
