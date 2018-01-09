#include "MKL46Z4.h"
#include "uart0.h"
#include "leds.h"	

int main(void){
	
	UART0_init();
	ledsInitialize();
	
	char text[]="Hello world!";
	uint8_t a=6;

	//c=UART0_reciver();
	//UART0_transmitter(a);
	
	send_String("hello world!\r\n");
	
while(1){
	ledsOn();
	//send_String(text);
	//b=UART0_reciver();
	//UART0_transmitter(a);
}
}