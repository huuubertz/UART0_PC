#include "MKL46Z4.h"
#include "uart0.h"
#include "leds.h"	

int main(void){
	
	UART0_init();
	ledsInitialize();
	uint8_t a=2;
	
while(1){
	ledsOn();
	UART0_transmitter(a);
	send_String("hello world!\r\n");
}
}