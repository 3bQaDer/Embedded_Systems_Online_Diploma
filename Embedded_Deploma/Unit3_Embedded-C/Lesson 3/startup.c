

extern unsigned int _STACK_TOP;
extern int main();

void default_handeler();
void reset_handeler();
void NMI_handeler() __attribute__ ((weak,alias("default_handeler")));
void HardFault_handeler() __attribute__ ((weak,alias("default_handeler")));
void MM_Fault_handeler() __attribute__ ((weak,alias("default_handeler")));
void Bus_Fault_handeler() __attribute__ ((weak,alias("default_handeler")));
void Usage_Fault_handeler() __attribute__ ((weak,alias("default_handeler")));


unsigned int  vectors [] __attribute__ ((section(".vectors"))) = {
(unsigned int ) &_STACK_TOP ,
(unsigned int ) &reset_handeler,
(unsigned int ) &NMI_handeler,
(unsigned int ) &HardFault_handeler,
(unsigned int ) &MM_Fault_handeler,
(unsigned int ) &Bus_Fault_handeler,
(unsigned int ) &Usage_Fault_handeler
};

extern unsigned int _E_text;
extern unsigned int _S_data;
extern unsigned int _E_data;
extern unsigned int _S_bss;
extern unsigned int _E_bss;


void reset_handeler(){
	/*copying .data from Flash to RAM*/
	unsigned int i;
	unsigned int _data_size = (unsigned char*)&_E_data - (unsigned char*)&_S_data;
	unsigned char *ptr_scr = &_E_text;
	unsigned char *ptr_dest = &_S_data;
	for(i=0 ; i< _data_size ; i++)
	{
		*((unsigned char*)ptr_dest++) = *((unsigned char*)ptr_scr++);
	}
	
	/*create .bss section*/
	unsigned int _bss_size = (unsigned char*)&_E_bss - (unsigned char*)&_S_bss;
	ptr_dest = &_S_data;
	for(i=0 ; i< _data_size ; i++)
	{
		*((unsigned char*)ptr_dest++) = (unsigned char*)0;
	}
	
	/*branching to main*/
	main();
}

void default_handeler(){
	reset_handeler();
}
