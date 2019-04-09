#include<avr/io.h>
#include<util/delay.h>
#include<util/lcd.h>
void main()
{
DDRC=0b11111111;
lcd_init();
hindiname_char();
while(1)
{
dis_cmd(0X80);
dis_data(0);
dis_cmd(0X81);
dis_data(1);
dis_cmd(0X82);
dis_data(2);
dis_cmd(0X83);
dis_data(3);
}
}

