#include<avr/io.h>
#include<util/delay.h>
#include<util/lcd.h>
#include<util/adc.h>
void main()
{
DDRC=0b11111111;
lcd_init();
adc_init();
animation2_char();
int i=0X88;
while(1)
{
int x=adc_read(0);
dis_cmd(0X8f);
dis_num(x);
int y=adc_read(1);
dis_cmd(0XCf);
dis_num(y);
_delay_ms(100);
dis_cmd(1);
_delay_ms(1);

if((x>490&&x<520)&&(y>500&&y<540))
{
dis_cmd(i);
dis_data(0);
_delay_ms(500);
}
if((x>=0&&x<200))
{
dis_cmd(i);
dis_data(2);
_delay_ms(500);
dis_cmd(i);
dis_data(0);
_delay_ms(500);
dis_cmd(i);
dis_data(1);
_delay_ms(500);
i--;
}

if(x>1000)
{
dis_cmd(i);
dis_data(1);
_delay_ms(500);
dis_cmd(i);
dis_data(2);
_delay_ms(500);
dis_cmd(i);
dis_data(0);
_delay_ms(500);
i++;
}

if(y>1000)
{
dis_cmd(i);
dis_string("up");
}
if(y>=0&&y<200)
{
dis_cmd(i);
dis_string("down");
}
}
}
