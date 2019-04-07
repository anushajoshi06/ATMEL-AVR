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
int x=0;
int a=0;
int b=0;
int func=0;
int c=0;
int m=0;
while(1)
{
x=key();
if(x>=0&&x<=9)
{
	if(m==0)
	{
		a=(10*a)+x;
		dis_cmd(0X8f);
		dis_num(a);
	}
	if(m==1)
	{
		b=(10*b)+x;
		dis_cmd(0XCf);
		dis_num(b);	
	}
}
if(x==10)
{
	func='+';
	m=1;
	dis_cmd(0x80);
	dis_data('+');
}

if(x==11)
{
	func='-';
	m=1;
	dis_cmd(0x80);
	dis_data('-');
}

if(x==12)
{
	func='*';
	m=1;
	dis_cmd(0x80);
	dis_data('*');
}

if(x==13)
{
	func='/';
	m=1;
	dis_cmd(0x80);
	dis_data('/');
}

if(x==14)
{
	if(func='+')
	{
		c=a+b;
		dis_cmd(0X84);
		dis_num(c);
	}
	if(func=='-')
	{
		c=a-b;
		dis_cmd(0X84);
		dis_num(c);
	}
	if(func=='*')
	{
		c=a*b;
		dis_cmd(0X84);
		dis_num(c);
	}
	if(func=='/')
	{
		c=a/b;
		dis_cmd(0X84);
		dis_num(c);
	}

}
if(x==15)
{
      x=0;
      a=0;
      b=0;
      func=0;
      c=0;
      m=0;
	  dis_cmd(1);
	  _delay_ms(100);
}
}
}


