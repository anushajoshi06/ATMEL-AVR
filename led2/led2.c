#include<avr/io.h>
#include<util/delay.h>
void main()
{
DDRA=0b00000000;
DDRB=0b11111111;
int a=0;
while(1){

if((PINA&0b00000001)==0)
{
while((PINA&0b00000001)==0)
{}
a++;
}
if((a%2)==0)
{PORTB=0;
}
else
{
PORTB=0b11111111;

}
}
}
