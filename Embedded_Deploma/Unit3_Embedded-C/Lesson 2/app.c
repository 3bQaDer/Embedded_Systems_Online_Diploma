#include "uart.h"


unsigned char word [100] ="Learn_In_Depth :<Mohamed Abd Elkader>";

void main(void){

  Uart_Send_String(word);

}
