
#define RCC   0x40021000
#define PortA 0x40010800
#define PortA_CRH   *((volatile unsigned int*)(PortA+0x04))
#define PortA_ODR   *((volatile unsigned int*)(PortA+0x0C))
#define RCC_APB2ENR *((volatile unsigned int*)(RCC+0x18))
/** another way to access ODR **/
typedef union{
	struct{
		volatile unsigned int Reserved:13;
		volatile unsigned int Pin13:1;
	}SPIN;
	volatile unsigned int All_Pins;
	
}UODR_t;
volatile UODR_t* R_ODR = (volatile UODR_t*)(PortA + 0x0C);

int main(void)
{
	RCC_APB2ENR |= (1<<2);
	PortA_CRH &= 0xFF0FFFFF;
	PortA_CRH |= 0x00200000;
	int i;
	while(1)
	{
		PortA_ODR |= (1<<13);
		for(i=0 ; i<50000 ; i++);
		PortA_ODR &= ~(1<<13);
		for(i=0 ; i<5000 ; i++);
	}

}
