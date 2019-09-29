#include <Grove_LED_Bar.h>
 int z ;


Grove_LED_Bar __bar2(3, 2, 0);

void setup()
{

  __bar2.begin();

}


void loop()
{
 z = analogRead(14)/373;
  __bar2.setLevel(z);
  delay(50);

}
