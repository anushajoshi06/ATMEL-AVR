#include<avr/io.h>
#include<uart.h>
#include<util/delay.h>
void main()
{
uart_init();
DDRB=0b11111111;
while(1)
{
unsigned char x=uart_rec();
uart_send(x);
if(x=='A')
{
PORTB=0b11111111;
}
if(x=='B')
{
PORTB=0b00000000;
}
}
}
