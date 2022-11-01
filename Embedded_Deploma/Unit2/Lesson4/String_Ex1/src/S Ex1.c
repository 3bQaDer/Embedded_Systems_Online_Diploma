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
	//assume it's case sensitive
	char data,a[100];
	int i;
	int count=0;
	printf("Enter a string : ");
	fflush(stdout);  fflush(stdin);
	gets(a);
	printf("Enter a character to find frequency : ");
	fflush(stdout);  fflush(stdin);
	scanf("%c",&data);
	for(i=0;a[i]!=0;i++){
		if(a[i]==data){
			count++;
		}

	}
	printf("frequency of %c = %d",data,count);

	return 0;
}
