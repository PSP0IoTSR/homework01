#include "Arduino.h"
#include "notes.h"

notes::notes(int p){
  pinMode(p, OUTPUT);
  pin = p;  
}

void notes::Star() {
  int count1=sizeof(starnote)/sizeof(int);
  for (int i=0; i<count1; i++) {
    int d=1000/starduration[i];
    tone(pin,starnote[i],d);
    int p=d*1.3;
    delay(p);
    noTone(pin);
    }
  }
  
void notes::Bee() {
  int count2=sizeof(beenote)/sizeof(int);     
  for (int i=0; i<count2; i++) {
    int d=1000/beeduration[i];
    tone(pin, beenote[i], d);
    int p=d*1.3;
    delay(p);
    noTone(pin);
    }
  }
void notes::Melody() {
  int count3= sizeof(Melodynote)/sizeof(int);
  for (int i=0; i<count3; i++) {
    int d=1000/Melodyduration[i];
    tone(pin, Melodynote[i], d);
    int p = d*1.3;
    delay(p);
    noTone(pin);
    }
  }


  
