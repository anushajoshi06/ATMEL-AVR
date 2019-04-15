void lcd_cmd(unsigned char abc)
{
PORTC=abc;
PORTC&=~(1<<0);
PORTC&=~(1<<1);
PORTC|=(1<<2);
_delay_ms(1);
PORTC&=~(1<<2);
}

void dis_cmd(unsigned char abc)
{
unsigned char d=0;
d=(abc&0b11110000);
lcd_cmd(d);
d=((abc<<4)&0b11110000);
lcd_cmd(d);
}

void lcd_data(unsigned char abc)
{
PORTC=abc;
PORTC|=(1<<0);
PORTC&=~(1<<1);
PORTC|=(1<<2);
_delay_ms(1);
PORTC&=~(1<<2);
}

void dis_data(unsigned char abc)
{
unsigned char d=0;
d=(abc&0b11110000);
lcd_data(d);
d=((abc<<4)&0b11110000);
lcd_data(d);
}

void lcd_init()
{
dis_cmd(0X02);
dis_cmd(0X28);
dis_cmd(0X0C);
dis_cmd(0X06);
}
void custom_char()
{
dis_cmd(0x40);
dis_data(0b00010111);
dis_data(0b00010100);
dis_data(0b00010100);
dis_data(0b00011111);
dis_data(0b00000101);
dis_data(0b00000101);
dis_data(0b00011101);
dis_data(0b00000000);
}
void hindiname_char()
{
dis_cmd(0x40);
dis_data(0b00011001);
dis_data(0b00000101);
dis_data(0b00000101);
dis_data(0b00001111);
dis_data(0b00000101);
dis_data(0b00000101);
dis_data(0b00011001);
dis_data(0b00000000);

dis_cmd(0x48);
dis_data(0b00011111);
dis_data(0b00000001);
dis_data(0b00000001);
dis_data(0b00011111);
dis_data(0b00011001);
dis_data(0b00000011);
dis_data(0b00010011);
dis_data(0b00001100);

dis_cmd(0x50);
dis_data(0b00011001);
dis_data(0b00011001);
dis_data(0b00001001);
dis_data(0b00010001);
dis_data(0b00010001);
dis_data(0b00001001);
dis_data(0b00000101);
dis_data(0b00000000);

dis_cmd(0x58);
dis_data(0b00011100);
dis_data(0b00010000);
dis_data(0b00010000);
dis_data(0b00010000);
dis_data(0b00010000);
dis_data(0b00010000);
dis_data(0b00010000);
dis_data(0b00000000);
}

void animation_char()
{
dis_cmd(0x40);
dis_data(0b00000000);
dis_data(0b00000000);
dis_data(0b00010001);
dis_data(0b00001010);
dis_data(0b00000100);
dis_data(0b00000000);
dis_data(0b00000000);
dis_data(0b00000000);

dis_cmd(0x48);
dis_data(0b00000000);
dis_data(0b00000000);
dis_data(0b00000000);
dis_data(0b00011111);
dis_data(0b00000000);
dis_data(0b00000000);
dis_data(0b00000000);
dis_data(0b00000000);

dis_cmd(0x50);
dis_data(0b00000000);
dis_data(0b00000000);
dis_data(0b00000100);
dis_data(0b00001010);
dis_data(0b00010001);
dis_data(0b00000000);
dis_data(0b00000000);
dis_data(0b00000000);
}

void dis_string(unsigned char *str)
{
unsigned char i=0;
while(str[i]!='\0')
{
dis_data(str[i]);
i++;
}
}

void dis_num(unsigned int number)
{
unsigned int d=0;
dis_cmd(0X04);
if(number == 0)
{
	dis_data('0');
	dis_data('0');
}
while(number!=0)
{
d=number%10;
dis_data(d+48);
number=number/10;
}
dis_cmd(0X06);
}

void animation2_char()
{
dis_cmd(0x40);
dis_data(0b00000100);
dis_data(0b00001010);
dis_data(0b00000100);
dis_data(0b00000100);
dis_data(0b00000100);
dis_data(0b00000100);
dis_data(0b00000100);
dis_data(0b00000000);

dis_cmd(0x48);
dis_data(0b00000100);
dis_data(0b00001010);
dis_data(0b00000100);
dis_data(0b00001110);
dis_data(0b00010101);
dis_data(0b00000010);
dis_data(0b00000001);
dis_data(0b00000000);

dis_cmd(0x50);
dis_data(0b00000100);
dis_data(0b00001010);
dis_data(0b00000100);
dis_data(0b00001110);
dis_data(0b00010101);
dis_data(0b00001000);
dis_data(0b00010000);
dis_data(0b00000000);

dis_cmd(0x58);
dis_data(0b00000100);
dis_data(0b00001010);
dis_data(0b00010101);
dis_data(0b00011111);
dis_data(0b00001110);
dis_data(0b00000100);
dis_data(0b00000100);
dis_data(0b00000100);

dis_cmd(0x60);
dis_data(0b00000000);
dis_data(0b00000000);
dis_data(0b00000100);
dis_data(0b00001010);
dis_data(0b00000101);
dis_data(0b00001110);
dis_data(0b00010000);
dis_data(0b00011111);
}

