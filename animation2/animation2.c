#include<avr/io.h>
#include<util/delay.h>
#include<util/lcd.h>
void main()
{
DDRC=0b11111111;
lcd_init();
animation2_char();
int i=0X80;

while(1)
{
dis_cmd(0X8f);
dis_data(3);
dis_cmd(i);
dis_data(0);
_delay_ms(500);
dis_cmd(i);
dis_data(1);
_delay_ms(500);
dis_cmd(i);
dis_data(2);
_delay_ms(500);
dis_cmd(i);
dis_data(' ');

i++;


if(i==0X8e)
{
dis_cmd(i);
dis_data(1);
_delay_ms(1000);
dis_cmd(i);
dis_data(4);
break;
}
}
}
