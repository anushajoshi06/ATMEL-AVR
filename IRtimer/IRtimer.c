#include<avr/io.h>
#include<util/delay.h>
#include<util/lcd.h>
#include<util/timer.h>
#include<avr/interrupt.h>
#include<util/adc.h>
void main()
{
DDRC=0b11111111;
DDRB=0b00001000;
DDRA=0b00000000;
timer_pwm_init();
adc_init();
lcd_init();
int count=0;
while(1)
{
int x=adc_read(0);
OCR0=x/4;
dis_cmd(0X8f);
dis_num(count);
/*if((PINA&0b00000011)==0b00000000)
{

}*/
if((PINA&0b00000011)==0b00000001)
{
while((PINA&0b00000011)==0b00000001)
{
}
_delay_ms(10);
count=count+1;

}
if((PINA&0b00000011)==0b00000010)
{
while((PINA&0b00000011)==0b00000001)
{
}
_delay_ms(10);
if(count>0)
{
count=count-1;

}
/*if((PINA&0b01111111)==0b00000011)
{

}*/
if((count>5)&&(count<=10))
{
OCR0=64;
}
if((count>10)&&(count<=15))
{
OCR0=128;
}
if((count>15)&&(count<=20))
{
OCR0=192;
}
if((count>20)&&(count<=25))
{
OCR0=255;
}
}
}
}
