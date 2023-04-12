/*
Tiva C project to Toggle a LED
*/
#include <stdint.h>
#define SYSCTL_BASE 	0X400FE000
#define PORTF_BASE		0X40025000

#define SYSCTL_RCGC2_R		*((volatile uint32_t *)(SYSCTL_BASE+0x108))
#define GPIO_PORTF_DIR_R	*((volatile uint32_t *)(PORTF_BASE+0x108))
#define GPIO_PORTF_DEN_R	*((volatile uint32_t *)(PORTF_BASE+0x108))
#define GPIO_PORTF_DATA_R	*((volatile uint32_t *)(PORTF_BASE+0x108))

int main(void){
	volatile int i;
	SYSCTL_RCGC2_R = 0x20;
	for(i =0;i<200;i++);
	GPIO_PORTF_DIR_R |= (1<<3);
	GPIO_PORTF_DEN_R |= (1<<3);

	while(1){

		GPIO_PORTF_DATA_R |= (1<<3);
		for(i =0;i<100000;i++);
		GPIO_PORTF_DATA_R &= ~(1<<3);	
		for(i =0;i<100000;i++);	
	}
	return 0;
}