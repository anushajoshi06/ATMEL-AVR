#include<avr/io.h>
#include<util/delay.h>
#include<util/lcd.h>
#include<util/adc.h>
void main()
{
DDRC=0b11111111;
lcd_init();
adc_init();

int x=0;
int t=0;
while(1)
{
      x=adc_read(0);
	  t=(x/2);
	  dis_cmd(0X8f);
	  dis_num(t);
	  _delay_ms(1000);
	  
	  }

}
