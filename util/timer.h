void timer_normal_init()
{
TCCR0|=(1<<CS01);
}
void timer_pwm_init()
{
TCCR0|=(1<<WGM00)|(1<<WGM01)|(1<<COM01)|(1<<CS01);
DDRB=0b00001000;
}
void timer_ctc_init()
{
TCCR0|=(1<<WGM01)|(1<<CS01)|(1<<COM00);
DDRB=0b00001000;
}
