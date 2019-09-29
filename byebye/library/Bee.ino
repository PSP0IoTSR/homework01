#include "notes.h"

int buzzerPin=9;
int beenote[]={G5, E5, E5, 0, F5, D5, D5, 0, C5, D5, E5, F5, G5, G5, G5, 0,
            G5, E5, E5, 0, F5, D5, D5, 0, C5, E5, G5, G5, E5, 0, 0, 0,
            D5, D5, D5, D5, D5, E5, F5, 0, E5, E5, E5, E5, E5, F5, G5, 0,
            G5, E5, E5, 0, F5, D5, D5, 0, C5, E5, G5, G5, C5, 0, 0, 0};
         
int duration[]={4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
                4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
                4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
                4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4};

void setup() {
 pinMode(buzzerPin, OUTPUT);
 }

void loop() {
  Bee(buzzerPin, sizeof(beenote)/sizeof(int));
  }

void Bee(int pin, int count) {
 for (int i=0; i<count; i++) {
    int d=1000/duration[i];
    tone(pin, beenote[i], d);
    int p=d*1.3;
    delay(p);
    noTone(pin);
    }
  delay(2000);
  }
