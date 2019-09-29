// #include "status_control.h"
#include "status_control.h"
#include "led_control.h"
#include "notes.h"
status_control btnstate(4);
led_control ledarray;
notes player(3);
int pre = -1;
void setup(){
  Serial.begin(115200);
  int pinmap[8] = {2, 5, 7, 10, 11, 13, 14, 15};//2 5 6 10 11 12 14 15
  ledarray.setting(pinmap);
  pinMode(16, INPUT);
  player.de = 100;
}
void loop(){
  player.de = ((analogRead(16)-180)/487)%8+1;
  btnstate.listen(1000);
  int state = btnstate.read();

  ledarray.display(player.de);
  Serial.println("status: "+String(state)+", speed: "+String(player.de));

  player.control(state);
  delay(10);
}
