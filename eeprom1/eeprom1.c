#include<avr/io.h>
#include<util/delay.h>
#include<util/lcd.h>
#include<util/timer.h>
#include<avr/interrupt.h>
void main()
{
DDRA=0b00000000;
PORTA=0b00001111;
DDRD=0b00001111;
DDRB=0b11111111;
eeprom_write(30,5);
DDRC=0b11111111;
while(1)
{
}
}
