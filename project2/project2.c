#include<avr/io.h>
#include<util/delay.h>
void main()
{
DDRB=0b11111111;
while(1){
int number[]={0b01101111,0b01111111,0b00000111,0b01111101};
for(int i=3;i>=0;i--){
PORTB=number[i];

_delay_ms(500);
}
}
}
