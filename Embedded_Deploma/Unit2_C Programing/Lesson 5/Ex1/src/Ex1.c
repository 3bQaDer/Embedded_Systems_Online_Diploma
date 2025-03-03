/*
 ============================================================================
 Name        : Ex1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int isPrime (int x);
void printPrime(int a,int z);
int main(void) {
	int start,end;
	printf("Enter two numbers (interval): ");
	fflush(stdin);  fflush(stdout);
	scanf("%d %d",&start,&end);
	printf("Prime numbers between %d and %d are: " ,start,end);
	printPrime(start,end);
	return 0;
}

int isPrime (int x)
{
	if(x<2)
		return 0;
	for(int i=2 ; i<x ; i++)
	{
		if(x%i == 0)
			return 0;
	}
	return 1;
}

void printPrime(int a,int z)
{
	for(int i=a ; i<=z ;i++)
	{
		if(isPrime(i))
			printf("%d ",i);
	}

}
