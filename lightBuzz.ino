#include "pitches.h"

int rPin = 2;
int yPin = 5; 
int gPin = 4;
int buzzPin = 8;
int note = NOTE_C5;

int lightTime; 
 
void setup() 
{
  pinMode(rPin, OUTPUT); 
  pinMode(yPin, OUTPUT); 
  pinMode(gPin, OUTPUT); 
  pinMode(buzzPin, OUTPUT); 
}
 
void loop() 
{  

    lightTime = (millis() / 1000) % 100; 
  
    if(lightTime < 40)
    {
      analogWrite(rPin, 1023);
      analogWrite(yPin, 0);
      analogWrite(gPin, 0);
  
      tone(buzzPin, note, 100);
      delay(1000);
    }
  
    else if(lightTime < 50)
    {
      analogWrite(rPin, 0);
      analogWrite(yPin, 1023);
      analogWrite(gPin, 0);
  
      tone(buzzPin, note, 100);
      delay(250);
    }
  
    else if(lightTime < 90)
    {
      analogWrite(rPin, 0);
      analogWrite(yPin, 0);
      analogWrite(gPin, 1023);
  
      tone(buzzPin, note, 100);
      delay(1000);
    }
  
    else if(lightTime < 100)
    {
      analogWrite(rPin, 0);
      analogWrite(yPin, 1023);
      analogWrite(gPin, 0);
  
      tone(buzzPin, note, 100);
      delay(250);
    }
}
