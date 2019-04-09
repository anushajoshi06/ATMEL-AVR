#include<avr/io.h>
#include<util/delay.h>
#include<util/timer.h>
#include<util/lcd.h>
void main()
{
timer_ctc_init();
while(1)
{
OCR0=50;
_delay_ms(1000);
OCR0=100;
_delay_ms(1000);
}
}
