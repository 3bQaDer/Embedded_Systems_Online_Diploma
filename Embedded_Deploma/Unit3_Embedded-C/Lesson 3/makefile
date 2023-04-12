CC= arm-none-eabi-
CFLAGS= -mcpu=cortex-m3 -g -mthumb
INCS= -I .	
SRC= $(wildcard *.c)
OBJ= $(SRC:.c=.o)	
As= $(wildcard *.s)
AsOBJ= $(As:.s=.o)
Project_Name=Toggling_LED


all: $(Project_Name).bin
	@echo "=======Build is done======="
$(Project_Name).bin: $(Project_Name).elf
	$(CC)objcopy.exe -O binary $< $@
$(Project_Name).elf:  $(OBJ) $(AsOBJ)
	$(CC)ld.exe -T linker_script.ld $(OBJ) $(AsOBJ) -o $@ -Map=Map_file.map

%.o: %.c 
	$(CC)gcc.exe -c $(CFLAGS) $(INCS) $< -o $@



clean:
	@echo "(===========Clean .bin file && .elf file && .hex file && .map file ===========)"
	rm -f *.elf *.hex *.bin *.map
	@echo "(===========Done Clean===========)"
clean-all:
	@echo "(===========Clean .o files && .bin file && .elf file && .hex file && .map file ===========)"
	rm -f *.o *.elf *.hex *.bin *.map
	@echo "(===========Done Clean===========)"
