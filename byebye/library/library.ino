// #include "status_control.h"
#include "status_control.h"
#include "led_control.h"
status_control btnstate(3);
led_control ledarray;
void setup(){
  int pinmap[8] = {1,2,3,4,5,6,7,8};
  ledarray.setting(pinmap);
}

void loop(){
  btnstate.listen(1000);
  int state = btnstate.read();
  ledarray.display(state);
  Serial.println(state);
}
