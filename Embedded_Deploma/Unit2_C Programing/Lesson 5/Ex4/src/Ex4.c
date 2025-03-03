/*
 ============================================================================
 Name        : Ex4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int power(int,int);
int main(void) {
	int num,exp;
	printf("Enter base number: ");
	fflush(stdin);  fflush(stdout);
	scanf("%d",&num);
	printf("Enter power number(postive number): ");
	fflush(stdin);  fflush(stdout);
	scanf("%d",&exp);
	printf("%d ^ %d = %d",num,exp,power(num,exp));
	return 0;
}
int power(int x, int y){
	if (y==1)
		return x;
	else
		return x*power(x,y-1);
}
