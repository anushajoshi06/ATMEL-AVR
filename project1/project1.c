#include<avr/io.h>
#include<util/delay.h>
void main()
{
DDRB=0b11111111;
while(1)
{
int a=0b00000001;
for(int i=0;i<8;i++)
{
PORTB=a;
_delay_ms(500);
a=a<<1;
}
}
}
