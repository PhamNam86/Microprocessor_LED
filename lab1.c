#include<16F887.h>
#DEVICE *=16 ADC=10 
#FUSES HS,NOWDT,NOPUT,NOLVP 
#USE DELAY(CLOCK=16M) 
#include<luutinh.h>
void main()
{
set_tris_b(0x00);  // khai bao port b la output 
set_tris_a(0b00000000); 
set_tris_c(0b00000000); 
set_tris_d(0b00000000); 
set_tris_e(0b00000000); 
while(TRUE){
output_b(0x01);
delay_ms(200);
output_b(0x02);
delay_ms(200);
output_b(0x04);
delay_ms(200);
output_b(0x08);
delay_ms(200);
output_b(0x10);
delay_ms(200);
output_b(0x20);
delay_ms(200);
output_b(0x40);
delay_ms(200);
output_b(0x80);
delay_ms(200);
/*
output_high(pin_b0); 
output_low(pin_b1); 
output_high(pin_b2); 
output_low(pin_b3); 
output_high(pin_b4) ;
output_low(pin_b5);
output_high(pin_b6); 
output_low(pin_b7);
*/
}
}