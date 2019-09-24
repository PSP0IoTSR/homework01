#include "notes.h"

int buzzerPin=9;
int startnote[]={C5, C5, G5, G5, A5, A5, G5, 0, F5, F5, E5, E5, D5, D5, C5, 0,
            G5, G5, F5, F5, E5, E5, D5, 0, G5, G5, F5, F5, E5, E5, D5, 0,
            C5, C5, G5, G5, A5, A5, G5, 0, F5, F5, E5, E5, D5, D5, C5, 0};
int duration[]={4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
                4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
                4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4}; //一拍切成4等分

void setup(){
  pinMode(buzzerPin,OUTPUT);
  }

void loop(){
  Star(buzzerPin, sizeof(startnote)/sizeof(int));
  }

void Star(int pin,int count) {
  for (int i=0; i<count; i++) {
    int d=1000/duration[i];
    tone(pin,startnote[i],d);
    int p=d*1.3;
    delay(p);
    noTone(pin);
    }
  delay(2000);
  }
