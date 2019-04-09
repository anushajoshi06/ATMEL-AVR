#include<avr/io.h>
#include<util/delay.h>
void main()
{
DDRA=0b00000000;
DDRB=0b11111111;
int i=0;
while(1)
{
int a[10]={0b00111111,0b00000110,0b1011011,0b01001111,0b1100110,0b01101101,0b01101111,0b01111111,0b00000111,0b01111101};
if(i<=10)
{
if((PINA&0b00000001)==0)
{
while((PINA&0b00000001)==0)
{}
PORTB=a[i];
i++;
}}
else
{
i=0;
PORTB=a[i];
}
}
}

