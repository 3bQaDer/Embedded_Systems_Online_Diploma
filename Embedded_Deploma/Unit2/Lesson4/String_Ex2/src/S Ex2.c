/*
 ============================================================================
 Name        : S.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char a[100];
	int i;
	printf("Enter a string : ");
	fflush(stdout);  fflush(stdin);
	gets(a);
	for(i=0;a[i]!=0;i++);
	printf("string length = %d",i);
	return 0;
}
