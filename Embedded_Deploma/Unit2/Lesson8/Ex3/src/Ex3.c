/*
 ============================================================================
 Name        : Ex3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char string[50];
	printf("Enter the string:");
	fflush(stdin);fflush(stdout);
	gets(string);
	char* pt=string+strlen(string)-1;
	printf("Reversed string: ");
	int i ;
	for(i=0;i<strlen(string);i++){
		putchar(*(pt-i));
	}
	return 0;
}

