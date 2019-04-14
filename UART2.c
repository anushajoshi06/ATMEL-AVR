#include<avr/io.h>
#include<uart.h>
#include<util/delay.h>
#include<util/lcd.h>
void main()
{
uart_init();

DDRB=0b11111111;
DDRC=0b11111111;
lcd_init();
int i=0X80;
while(1)
{
unsigned char x=uart_rec();
uart_send(x);
if(x==';')
{
i=i-1;
dis_cmd(i);
dis_data(' ');
}
else{
dis_cmd(i);
dis_data(x);
i++;
if(i==0X90)
{
i=0XC0;
}
if(i>0XCf)
{
dis_cmd(1);
_delay_ms(10);
i=0X80;
}
}
}
}
