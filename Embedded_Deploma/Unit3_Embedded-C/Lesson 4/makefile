CC= arm-none-eabi-
CFLAGS= -mcpu=cortex-m4 -g -mthumb
INCS= -I .	
SRC= $(wildcard *.c)
OBJ= $(SRC:.c=.o)	
As= $(wildcard *.s)
AsOBJ= $(As:.s=.o)
Project_Name=Toggling_LED_TivaC


all: $(Project_Name).bin
	
$(Project_Name).bin: $(Project_Name).elf
	$(CC)objcopy.exe -O binary $< $@
$(Project_Name).elf:  $(OBJ) $(AsOBJ)
	$(CC)ld.exe -T linker_script.ld $(OBJ) $(AsOBJ) -o $@ -Map=Map_file.map
	cp $@ $(Project_Name).axf

%.o: %.c 
	$(CC)gcc.exe -c $(CFLAGS) $(INCS) $< -o $@



clean:
	rm -f *.elf *.hex *.bin *.map
clean-all:
	rm -f *.o *.elf *.hex *.bin *.map
	
