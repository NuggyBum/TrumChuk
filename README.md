TrumChuk - Digital Instrument Prototype
========
Source code for the TrumChuk digital instrument prototype, created by Alex Dudley.

alex.w.dudley@googlemail.com

http://alexdudley.bandcamp.com

Setup:
======
Once hardware is built upload TrumChukArduino.ino into the Arduino via the IDE and follow the next set of instructions.

To Play The TrumChuk:
======

1. Connect Wii Nunchuk to TrumChuk hardware.
2. Plug in USB cable to the computer from the TrumChuk.
3. Load TrumChukIO.pd, select the port number with the radio box and click connect (make sure pd is connected to /dev/tty.usbmodem1d11).
4. Load TrumChukSynth.pd
5. Turn DSP on by clicking on the button labeled DSP and then click "Generate New Wave", the outWave array should update with a waveform.
6. Choose between the TrumChuk mapping or the Trumpet mapping.
7. Happy Trumming!

