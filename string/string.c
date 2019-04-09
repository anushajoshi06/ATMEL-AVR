#include<avr/io.h>
#include<util/delay.h>
#include<util/lcd.h>
void main()
{

DDRC=0b11111111;
lcd_init();

while(1)
{
dis_cmd(0X80);
dis_string("     ANUSHA      ");
dis_cmd(0XC0);
dis_string("     6.9.1999    ");
_delay_ms(500);
dis_cmd(0X80);
dis_string("                ");
dis_cmd(0XC0);
dis_string("                ");
_delay_ms(500);

}
}
