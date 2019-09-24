#include <Arduino.h>
#include "status_control.h"

status_control::status_control(int p){
  pinMode(p, INPUT);
  __pin = p;
  __sta = 3;
}

int status_control::change(int m){
  int a = (__len+(m%__len));
  __sta = (__sta + a)%__len;
  //__sta = (__sta+1)%__len;
  return __sta;
}

int status_control::read(){
  return __sta;
}

void status_control::listen(){
  int mov = digitalRead(__pin);
  if(mov==HIGH)
    change(1);
}

void status_control::listen(int d){
  int mov = digitalRead(__pin);
  if(mov==HIGH){
    change(1);
    delay(d);
  }
}
