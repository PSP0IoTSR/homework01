#include "led_control.h"
#include "notes.h"
bool a1 = false;
bool a2 = false;
int pinmap[8] = {2,3,4,5,6,7,8,9};
int state=0;

led_control ledarray;
notes note(9);
void setup(){
  pinMode(11, INPUT);
  Serial.begin(9600);
  ledarray.setting(pinmap);
}

void loop(){
  sta();      
}

void sta(){
  a1 = digitalRead(11) ;
  if (( ( a1 ) != ( a2 ) )){
    if (( ( a1 ) == ( HIGH ) )){
      state = ( state + 1 ) ;
      Serial.print(state);
      Serial.println();
      if(state == 1){
          note.Star();
          state =1;
      }else if(state == 2){
        note.Bee();
        state =2;
        }else if(state == 3){
      note.Melody();
      state =3;
      }         
    }
  }
  a2 = a1 ;
}
