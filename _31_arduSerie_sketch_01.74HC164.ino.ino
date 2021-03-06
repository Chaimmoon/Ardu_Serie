
/*
  Project name:
     Shift Registers — How it Works! #arduSerie — 31
     Flavour I - 74HC164 CHIP
     Hex File: _31_arduSerie_sketch_01.74HC164.ino
   Revision History:
     14/05/2017:
Description:
        What is the difference between 74hc595 and 74hc164. Anyway, how do the shift register work?
        
    MCU:                     Arduino 1.8.2 - @16MHz       http://www.arduino.cc/
IC Chip:                     Bluetooth Datasheet - HC-06   https://goo.gl/s9ZcNC
Connections:
      See Official youtube channel vids: https://goo.gl/GcZxCR
      
Based on:  Derek Molloy video https://www.youtube.com/watch?v=h84cDS7_9Pg
  
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License v3 as published by the Free Software Foundation
   
*/
const int clockPin = 9;
const int dataPin = 8;

void setup(){
  pinMode(clockPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
}

void loop(){
  for(int i = 0; i<8; i++)
  {
    shiftOut(dataPin, clockPin, MSBFIRST, B00000001 << i);
    delay(125);//125*8 = 1 second
  }
  for (int i = 0; i<8; i++){
    shiftOut(dataPin, clockPin, MSBFIRST, B10000000 >> i);
    delay(125);//125*8 = 1 second
  }


}


