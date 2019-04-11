#include <avr/io.h> 
#include <util/delay.h> 
#include <util/lcd.h> 
 
void main() 
{ 
    DDRC = 0xff; 
    lcd_init(); 
    dis_cmd(0x8a); 
    dis_data(':'); 
    dis_cmd(0x8d); 
    dis_data(':'); 
    int i,j=0; 
    while(1){ 
    dis_cmd(0x8f); 
    dis_num(i); 
    _delay_ms(10); 
    i++; 
    if(i==60){ 
    j++; 
    dis_cmd(0x8c); 
    dis_num(j); 
    i=0; 
    } 
 
    } 
    } 
