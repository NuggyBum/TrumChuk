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

**button 1 is the closest button to the player, button 4 is the thumb button**

TrumChuk Mapping: 

A = 1 0 0 0, A# = 1 0 0 4, B = 0 2 0 0, C = 0 0 3 0, C# = 0 0 3 4, D = 1 2 0 0, D# = 1 2 0 4, E = 1 0 3 0, F = 0 2 3 0, F# 0 2 3 4, G = 1 2 3 0, G# = 1 2 3 4
Trumpet Mapping: 

A = 1 2 0 4, A# = 1 0 0 4, B = 0 2 0 4, C = 0 0 0 0, C# = 1 2 3 0, D = 1 0 3 0, D# = 0 2 3 0, E = 1 2 0 0, F = 1 0 0 0, F# 0 2 0 0, G = 0 0 0 4, G# = 0 2 3 4

7. Happy Trumming!

