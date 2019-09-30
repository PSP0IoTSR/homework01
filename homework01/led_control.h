/*
*/

#ifndef __LED_CONTROL_H__
#define __LED_CONTROL_H__

#include <Arduino.h>


class led_control
{
public:
  led_control();
  led_control(int pinmap[]);
  void setting(int pinmap[]);
  void display(int len);
private:
  int __map[8];
  int __len = 8;
};

//extern status_control status;

#endif
