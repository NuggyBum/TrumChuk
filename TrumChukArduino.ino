#include <Wire.h>
#include "ArduinoNunchuk.h"


ArduinoNunchuk nunchuk = ArduinoNunchuk();


 

const int button1Pin = 2; //button variables
const int button2Pin = 3;
const int button3Pin = 4;
const int button4Pin = 5;
int button1State = 0; 
int button2State = 0;
int button3State = 0;
int button4State = 0;

const int micPin = 3;// mic variables
int micVal = 0;

int xJoystick; //nunchuk variables
int yJoystick;
int xTilt;
int yTilt;
int zTilt;
int cButtonState = 0;
int zButtonState = 0;



void setup() {
  Serial.begin(9600);
  pinMode(button1Pin, INPUT);
  pinMode(button2Pin, INPUT);
  pinMode(button3Pin, INPUT);
  pinMode(button4Pin, INPUT);  
  nunchuk.init();
}

void loop() {
  
  //MIC INPUT
  micVal = analogRead(micPin);
  micVal = constrain(micVal, 400 , 1024);
  micVal = map(micVal, 400 , 1024, 177, 255); //177 255
  Serial.write(micVal);
  
  //NUNCHUK INPUT
  nunchuk.update();
  
  cButtonState = nunchuk.cButton; //read nunchuk states
  zButtonState = nunchuk.zButton;
  xJoystick = nunchuk.analogX;
  yJoystick = nunchuk.analogY;
  xTilt = nunchuk.accelX;
  xTilt = constrain(xTilt, 320, 720); //constrain xTilt values
  yTilt = nunchuk.accelY;
  yTilt = constrain(yTilt, 320, 720); //constrain yTilt values
  zTilt = nunchuk.accelZ;
  zTilt = constrain(zTilt, 320, 720); //constrain zTilt values
  
  cButtonState = map(cButtonState, 0, 1, 8, 9); //nunchuk mappings
  zButtonState = map(zButtonState, 0, 1, 10, 11);
  xJoystick = map(xJoystick, 0, 255, 12, 32);
  yJoystick = map(yJoystick, 0, 255, 33, 53);
  xTilt = map(xTilt, 320, 720, 54, 94);
  yTilt = map(yTilt, 320, 720, 95, 135);
  zTilt = map(zTilt, 320, 720, 136, 176);
  
  Serial.write(cButtonState); //write nunchuk states to serial
  Serial.write(zButtonState);
  Serial.write(xJoystick);
  Serial.write(yJoystick);
  Serial.write(xTilt);
  Serial.write(yTilt);
  Serial.write(zTilt);
  
  //BUTTON INPUT
  button1State = digitalRead(button1Pin); //read button states
  button2State = digitalRead(button2Pin);
  button3State = digitalRead(button3Pin);
  button4State = digitalRead(button4Pin);
  
  button1State = map(button1State, 0, 1, 0, 1); //button 1 mapping 0-1
  button2State = map(button2State, 0, 1, 2, 3); //button 2 mapping 2-3
  button3State = map(button3State, 0, 1, 4, 5); //button 3 mapping 4-5
  button4State = map(button4State, 0, 1, 6, 7); //button 4 mapping 6-7
  
  Serial.write(button1State); //write button states to serial
  Serial.write(button2State);
  Serial.write(button3State);
  Serial.write(button4State);
  
}
