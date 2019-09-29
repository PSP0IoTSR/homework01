#ifndef LED_CONTROL_H
#define LED_CONTROL_H

#include <Arduino.h>


class led_control{
public:
  led_control();
  led_control(int pinmap[]);
  void setting(int pinmap[]);
  void display(int len);
private:
  int __map[8];
  int __len = 8;
};

#endif
