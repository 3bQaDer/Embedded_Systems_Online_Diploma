#include "uart.h"

#define UART0DR *((volatile unsigned int*)((unsigned int*)(0x101f1000)))

void Uart_Send_String (unsigned char * word)
{
   while(* word != '\0')
   {
       UART0DR = (unsigned int)*word;
       word++;
   }
}
