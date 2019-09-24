#include "notes.h"

int buzzerPin=9;
int melodynote[]={E4, E4, E4, C4, E4, G4, G3,  
                C4, G3, E3, A3, B3, AS3, A3, G3, 
                E4, G4, A4, F4, G4, E4, C4, D4, B3,
                C4, G3, E3, A3, B3, AS3, A3, G3, 
                E4, G4, A4, F4, G4, E4, C4, D4, B3,
                G4, FS4, E4, DS4, E4, GS3, A3, C4, A3, C4, 
                D4, G4, FS4, E4, DS4, E4, C5, C5, C5,
                G4, FS4, E4, DS4, E4, GS3, A3, 
                C4, A3, C4, D4, DS4, D4, C4,
                C4, C4, C4, C4, D4, E4, C4, A3, 
                G3, C4, C4, C4, C4, D4, E4,
                C4, C4, C4, C4, D4, E4, C4, A3, G3};
         
int duration[]={8,4,4,8,4,2,2,
                3,3,3,4,4,8,4,8,
                8,8,4,8,4,3,8,8,3,
                3,3,3,4,4,8,4,8,
                8,8,4,8,4,3,8,8,2,
                8,8,8,4,4,8,8,4,8,8,
                3,8,8,8,4,4,4,8,2,
                8,8,8,4,4,8,8,
                4,8,8,3,3,3,1,
                8,4,4,8,4,8,4,8,
                2,8,4,4,8,4,1,
                8,4,4,8,4,8,4,8,2};

void setup() {
 pinMode(buzzerPin, OUTPUT);
 }

void loop() {
  Bee(buzzerPin, sizeof(melodynote)/sizeof(int));
  }

void Bee(int pin, int count) {
 for (int i=0; i<count; i++) {
    int d=1000/duration[i];
    tone(pin, melodynote[i], d);
    int p=d*1.3;
    delay(p);
    noTone(pin);
    }
  delay(2000);
  }
