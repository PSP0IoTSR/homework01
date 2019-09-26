#include<Arduino.h>
#include "led.h"

led::led()
{
    //ctor
}
led::led(int a,int pinIn[8]){
length  = a
for(int i = 0 ; i < 8 ; i++)
{
    pin[i] = pinIn[i];
}

switch(length){
    case 1:
        digitalWrite(pin[0],HIGH);
        digitalWrite(pin[1],LOW);
        digitalWrite(pin[2],LOW);
        digitalWrite(pin[3],LOW);
        digitalWrite(pin[4],LOW);
        digitalWrite(pin[5],LOW);
        digitalWrite(pin[6],LOW);
        digitalWrite(pin[7],LOW);
    case 2:
        digitalWrite(pin[0],HIGH);
        digitalWrite(pin[1],HIGH);
        digitalWrite(pin[2],LOW);
        digitalWrite(pin[3],LOW);
        digitalWrite(pin[4],LOW);
        digitalWrite(pin[5],LOW);
        digitalWrite(pin[6],LOW);
        digitalWrite(pin[7],LOW);
    case 3:
        digitalWrite(pin[0],HIGH);
        digitalWrite(pin[1],HIGH);
        digitalWrite(pin[2],HIGH);
        digitalWrite(pin[3],LOW);
        digitalWrite(pin[4],LOW);
        digitalWrite(pin[5],LOW);
        digitalWrite(pin[6],LOW);
        digitalWrite(pin[7],LOW);
    case 4:
        digitalWrite(pin[0],HIGH);
        digitalWrite(pin[1],HIGH);
        digitalWrite(pin[2],HIGH);
        digitalWrite(pin[3],HIGH);
        digitalWrite(pin[4],LOW);
        digitalWrite(pin[5],LOW);
        digitalWrite(pin[6],LOW);
        digitalWrite(pin[7],LOW);
    case 5:
        digitalWrite(pin[0],HIGH);
        digitalWrite(pin[1],HIGH);
        digitalWrite(pin[2],HIGH);
        digitalWrite(pin[3],HIGH);
        digitalWrite(pin[4],HIGH);
        digitalWrite(pin[5],LOW);
        digitalWrite(pin[6],LOW);
        digitalWrite(pin[7],LOW);
    case 6:

        digitalWrite(pin[0],HIGH);
        digitalWrite(pin[1],HIGH);
        digitalWrite(pin[2],HIGH);
        digitalWrite(pin[3],HIGH);
        digitalWrite(pin[4],HIGH);
        digitalWrite(pin[5],HIGH);
        digitalWrite(pin[6],LOW);
        digitalWrite(pin[7],LOW);
    case 7:
        digitalWrite(pin[0],HIGH);
        digitalWrite(pin[1],HIGH);
        digitalWrite(pin[2],HIGH);
        digitalWrite(pin[3],HIGH);
        digitalWrite(pin[4],HIGH);
        digitalWrite(pin[5],HIGH);
        digitalWrite(pin[6],HIGH);
        digitalWrite(pin[7],LOW);
    case 8:
        digitalWrite(pin[0],HIGH);
        digitalWrite(pin[1],HIGH);
        digitalWrite(pin[2],HIGH);
        digitalWrite(pin[3],HIGH);
        digitalWrite(pin[4],HIGH);
        digitalWrite(pin[5],HIGH);
        digitalWrite(pin[6],HIGH);
        digitalWrite(pin[7],HIGH);
      default:
        digitalWrite(pin[0],LOW);
        digitalWrite(pin[1],LOW);
        digitalWrite(pin[2],LOW);
        digitalWrite(pin[3],LOW);
        digitalWrite(pin[4],LOW);
        digitalWrite(pin[5],LOW);
        digitalWrite(pin[6],LOW);
        digitalWrite(pin[7],LOW);

  }
}



