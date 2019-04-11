#include<avr/io.h>
#include<util/delay.h>
#include<util/key.h>
#include<util/lcd.h>
char key();
void main()
{
DDRA=0b00000000;
DDRD=0b00001111;
DDRB=0b11111111;
PORTA=0b00001111;
DDRC=0b11111111;
lcd_init();
int x=0;
int a=0;
int b=1234;
while(1)
{
x=key();
dis_cmd(1);
_delay_ms(10);
if(x>=0&&x<=9)
{
a=(10*a)+x;
dis_cmd(0X8f);
dis_num(a);
_delay_ms(1000);
dis_string(" ****");
}
if(x==10)
{
if(a==b)
{
dis_cmd(1);
_delay_ms(10);
dis_cmd(0X80);
dis_string("CORRECT PASSWORD");
_delay_ms(1000);
dis_cmd(1);
a=0;
if(x==11){
dis_cmd(1);
_delay_ms(10);
}
}
else
{
dis_cmd(1);
_delay_ms(10);
dis_cmd(0X80);
dis_string("INCORRECT PASSWORD");
_delay_ms(1000);
dis_cmd(1);
a=0;
if(x==11){
dis_cmd(1);
_delay_ms(10);
}
}
}
}
}

