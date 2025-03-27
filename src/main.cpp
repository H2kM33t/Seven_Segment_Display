#include <Arduino.h>

int SEVEN_SEGMENT_DISPLAY[10] = {0X40, 0XF9, 0X24, 0X30, 0X19, 0X12, 0x02, 0x78, 0x00, 0x18};

void setup()
{
  DDRD = 0XFF;
}

void loop()
{
  for (int i = 0; i < 10; i++)
  {
    PORTD = SEVEN_SEGMENT_DISPLAY[i];
    delay(1000);
  }
}
