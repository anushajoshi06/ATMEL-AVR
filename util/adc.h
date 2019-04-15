void adc_init()
{
ADCSRA|=(1<<ADEN);
ADCSRA|=(1<<ADPS2)|(1<<ADPS1)|(1<<ADPS0);
ADMUX|=(1<<REFS0);
}
unsigned int adc_read(char channel)
{
ADMUX=(0b01000000|channel);
ADCSRA|=(1<<ADSC);
while(!(ADCSRA &(1<<ADIF)))
{
}
ADCSRA|=(1<<ADIF);
return(ADC);
}
