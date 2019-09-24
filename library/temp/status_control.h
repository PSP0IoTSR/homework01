#ifndef __STATUS_CONTROL_H__
#define __STATUS_CONTROL_H__

//#include "status.control.h"
#include <Arduino.h>
class status_control{
  private:
    int __pin;
    int __status = 0;
    int __len = 0;
  public:
    status_control(int p);
    int change();
}

#endif