/*
 ============================================================================
 Name        : Ex2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setvbuf(stdout,NULL,_IONBF,0);
	char a=65;
	char* c=&a;
	printf("The alphapet are:\n");
	for(int i =0;i<26;i++){
		printf("%c  ",(*c)+i);
	}
	return 0;
}

