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
#include <string.h>
int main(void) {
	char arr[100],temp;
		int i;
		printf("Enter a string : ");
		fflush(stdin);  fflush(stdout);
		gets(arr);
		for(i=0 ; i<strlen(arr)/2 ; i++)
		{
			temp = arr[i];
			arr[i] = arr[strlen(arr)-i-1];
			arr[strlen(arr)-i-1] = temp;
		}
		printf("Reverse string is : %s",arr);

	return 0;
}
