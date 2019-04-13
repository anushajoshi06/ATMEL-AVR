#include<avr/io.h>
#include<avr/interrupt.h>
#include<util/delay.h>
#include<util/lcd.h>
#include<util/adc.h>
#include<util/timer.h>
void main()
{
timer_pwm_init();
adc_init();
while(1)
{
int x=adc_read(0);
OCR0=x/4;
/*OCR0=50;
_delay_ms(1000);
OCR0=100;
_delay_ms(1000);*/
}
}
