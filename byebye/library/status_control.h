/*
*/

#ifndef __STATUS_CONTROL_H__
#define __STATUS_CONTROL_H__

#include <Arduino.h>


class status_control
{
public:
  status_control(int p);
  int change(int m);
  int read();
  void listen();
  void listen(int d);
private:
  int __pin;
  int __len;
  int __sta;
};

//extern status_control status;

#endif
