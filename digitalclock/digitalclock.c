#include<avr/io.h>
#include<util/delay.h>
#include<util/lcd.h>
void main()
{

DDRC=0b11111111;
lcd_init();
int i=0,j=0,k=0;
while(1)
{
dis_cmd(0X8f);
dis_num(i);

dis_cmd(0X8c);
dis_num(j);

dis_cmd(0X89);
dis_num(k);

dis_cmd(0X8d);
dis_string(":");

dis_cmd(0X8a);
dis_string(":");

i++;

_delay_ms(100);

if(i==60)
{
	i=0;
	j++;
	if(j==60)
	{j=0;k++;}
}


}


}
