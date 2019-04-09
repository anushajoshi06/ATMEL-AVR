#include<avr/io.h>
#include<util/delay.h>
#include<util/lcd.h>
void main()
{
DDRC=0b11111111;
lcd_init();
custom_char();
while(1)
{
dis_cmd(0X80);
dis_data(0);
}
}
