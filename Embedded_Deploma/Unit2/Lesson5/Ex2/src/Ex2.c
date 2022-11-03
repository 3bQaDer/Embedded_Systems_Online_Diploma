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
int factorial(int);
int main(void) {
	int x ;
	printf("Enter a postive number: ");
		fflush(stdin);  fflush(stdout);
		scanf("%d",&x);
		printf("Factorial of %d = %d",x,factorial(x));
	return 0;
}
int factorial(int x){
	if (x==0||x==1)
		return 1;
	else
		return x*factorial(x-1);

}
