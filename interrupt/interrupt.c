#include<avr/io.h>
#include<avr/interrupt.h>
#include<util/delay.h>
#include<util/lcd.h>
#include<util/timer.h>
int a=0;
int num=0;
ISR(TIMER0_OVF_vect)
{
a++;
if(a==490)
{
num++;
a=0;
}
}
void main()
{
DDRC=0b11111111;
lcd_init();
timer_normal_init();
TIMSK|=(1<<TOIE0);
sei();
while(1)
{
dis_cmd(0x8f);
dis_num(num);
}
}
