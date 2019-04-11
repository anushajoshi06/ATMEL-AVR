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
OCR0=260;
_delay_ms(1000);
OCR0=231;
_delay_ms(1000);
OCR0=208;
_delay_ms(1000);
OCR0=195;
_delay_ms(1000);
OCR0=173;
_delay_ms(1000);
OCR0=156;
_delay_ms(1000);

OCR0=138;
_delay_ms(1000);


//dis_num(x);
}
}
