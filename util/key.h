char key()
{
while(1)
{
PORTD=0b00001110;
_delay_ms(10);
        if((PINA&0b00000001)==0){while((PINA&0b00000001)==0){}return(0);}
        if((PINA&0b00000010)==0){while((PINA&0b00000010)==0){}return(1);}  
		if((PINA&0b00000100)==0){while((PINA&0b00000100)==0){}return(2);}
		if((PINA&0b00001000)==0){while((PINA&0b00001000)==0){}return(3);}
		
PORTD=0b00001101;
_delay_ms(10);
        if((PINA&0b00000001)==0){while((PINA&0b00000001)==0){}return(4);}
        if((PINA&0b00000010)==0){while((PINA&0b00000010)==0){}return(5);} 
		if((PINA&0b00000100)==0){while((PINA&0b00000100)==0){}return(6);}
		if((PINA&0b00001000)==0){while((PINA&0b00001000)==0){}return(7);}  
		
PORTD=0b00001011;
_delay_ms(10);
        if((PINA&0b00000001)==0){while((PINA&0b00000001)==0){}return(8);}
        if((PINA&0b00000010)==0){while((PINA&0b00000010)==0){}return(9);} 
		if((PINA&0b00000100)==0){while((PINA&0b00000100)==0){}return(10);}
		if((PINA&0b00001000)==0){while((PINA&0b00001000)==0){}return(11);}
		
PORTD=0b00000111;
_delay_ms(10);
        if((PINA&0b00000001)==0){while((PINA&0b00000001)==0){}return(12);}
        if((PINA&0b00000010)==0){while((PINA&0b00000010)==0){}return(13);} 
		if((PINA&0b00000100)==0){while((PINA&0b00000100)==0){}return(14);}
		if((PINA&0b00001000)==0){while((PINA&0b00001000)==0){}return(15);} 
}
}		      		           		                     
