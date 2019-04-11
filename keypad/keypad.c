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
int x;
char button_value;
while(1)
{
x=key();
button_value=key();
PORTB= button_value;
dis_cmd(1);
_delay_ms(10);
dis_cmd(0X8f);
dis_num(x);
}
}

