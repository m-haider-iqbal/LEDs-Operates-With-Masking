
#include <Arduino.h>
#define MASKING 0b00000000
#define DDDRRRBBB (*(volatile unit_t*)(0x24))
#define PORTBB (*(volatile unit_t*)(0x25))
void setup()
{
DDDRRRBBB = 1 << 5;
}
void loop() 
{
PORTB = 1 << 5;
delay(1000);
PORTB = PORTB & MASKING;
delay(100);
}
