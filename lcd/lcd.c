#include<avr/io.h>
#include<util/delay.h>
#include<util/lcd.h>
void main()
{
DDRC=0b11111111;
lcd_init();
while(1)
{
dis_cmd(0X80);
dis_data('A');
dis_data('N');
dis_data('U');
dis_data('S');
dis_data('H');
dis_data('A');
}
}
