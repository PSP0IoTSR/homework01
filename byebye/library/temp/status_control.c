#include "status_control.h"

status_control::status_control(int p){
  __pin = p;
  __status = 0;
  __len = 3;
}

int status_control::change(){
  __status = (__status + 1)%__len;
  return __status;
}