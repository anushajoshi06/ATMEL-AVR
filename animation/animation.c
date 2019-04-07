#include<avr/io.h>
#include<util/delay.h>
#include<util/lcd.h>
void main()
{
DDRC=0b11111111;
lcd_init();
animation_char();
int i=0X80;
while(1)
{
dis_cmd(i);
dis_data(0);
_delay_ms(200);
dis_cmd(i);
dis_data(1);
_delay_ms(200);
dis_cmd(i);
dis_data(2);
_delay_ms(200);
dis_cmd(i);
dis_data(' ');
i++;
if(i==0X90)
{
i=0X80;
}
}
}
