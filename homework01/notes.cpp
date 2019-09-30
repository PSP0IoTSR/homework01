#include "Arduino.h"
#include "notes.h"

notes::notes(int p){
  pinMode(p, OUTPUT);
  pin = p;  
}

void notes::control(int n){
  if(state!=n){
    state = n;
    index = 0;
  }
  switch(n){
    case 0:
      play(Melodynote, sizeofMelody);
    break;
    case 1:
      play(beenote, sizeofBee);
    break;
    case 2:
      play(starnote, sizeofStar);
    break;
    default:
      Serial.println("undefined");
  }
}

void notes::play(int notelist[], int len){
  if(index<len){
    int d=1000/notelist[index];
    Serial.println("pin: "+String(pin)+", note: "+String(notelist[index])+", "+String(d));
    tone(3,notelist[index],300);
    //tone(pin, notelist[index], d);
    //Serial.println("pin: "+String(pin)+", sound: "+String(notelist[index]));
    //tone(pin, 1000);
    delay(de*100);
    noTone(pin);
    index++;
  }
  //int holycow = sizeof(notelist)/sizeof(int);
  //Serial.println("length: "+holycow);
//  if(index<_len){
//    int d=1000/notelist[index];
//    tone(pin, notelist[index], d);
//    int p = d*1.3;
//    noTone(pin);
//    Serial.println("delay:"+de);
//    index++;
//    delay(de);
//  }
} 

  
