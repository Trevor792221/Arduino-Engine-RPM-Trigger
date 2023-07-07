Thanks to feynman137 (https://forum.arduino.cc/u/feynman137)
and Blackfin (https://forum.arduino.cc/u/Blackfin)
for having figured out how to get a tach signal into the arduino and calculating the RPM

You will need:
1x 1k Ohm Resistor
2x 330 Ohm Resistor
1x 1N4007 Diode
1x 5.1V Zener Diode
1x H11L1M Optocoupler
1x Relay Module
1x Schematic (https://forum.arduino.cc/t/reading-an-engines-rpm-with-arduino/689851/5)

Schematic built here
(https://forum.arduino.cc/t/reading-an-engines-rpm-with-arduino/689851/36)

Put a 330 Ohm Resistor between pins 4 and 6 similar to the schematic shown here
(https://forum.arduino.cc/t/reading-an-engines-rpm-with-arduino/689851/49)

On the relay board connect VCC to +5v, GND to -, and IN to pin 13 on the Arduino

If  you need help with the relay board go here (https://randomnerdtutorials.com/guide-for-relay-module-with-arduino/)

Change the TargetRPM and Cylinders for your engine and the RPM you want to trigger the relay at

Have fun


