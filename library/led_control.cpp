#include <Arduino.h>
#include "led_control.h"

led_control::led_control(){}
led_control::led_control(int pinmap[8]){
  for(int i=0;i<__len;i++)
    __map[i] = pinmap[i];
}

void led_control::setting(int pinmap[8]){
  for(int i=0;i<__len;i++)
    __map[i] = pinmap[i];
}

void led_control::display(int len){
  int c = __len>len?len:__len;
  for(int i=0;i<__len;i++)
    digitalWrite(__map[i], i<c?HIGH:LOW);
}
