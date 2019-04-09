#include<avr/io.h>
#include<util/delay.h>
#include<util/lcd.h>
void main()
{

DDRC=0b11111111;
lcd_init();
int a=0;
int b=0;
int c;
c=a+b;
while(1)
{
dis_cmd(0X8f);
dis_num(c);
c++;
_delay_ms(100);
}
}
