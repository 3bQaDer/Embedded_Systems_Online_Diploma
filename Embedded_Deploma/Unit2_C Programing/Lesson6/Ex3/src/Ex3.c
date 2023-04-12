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
struct sComplex{
	float real;
	float imaginary;
};
void complexSum(struct sComplex,struct sComplex);
int main(void) {
	setvbuf(stdout,NULL,_IONBF,0);
	struct sComplex n1,n2;
	printf("For 1st number\n");
	printf("Enter real and imaginary respectively:");
	scanf("%f %f",&n1.real,&n1.imaginary);
	printf("For 2nd number\n");
	printf("Enter real and imaginary respectively:");
	scanf("%f %f",&n2.real,&n2.imaginary);
	complexSum(n1,n2);
	return 0;
}
void complexSum(struct sComplex n1,struct sComplex n2){
	struct sComplex res;
	res.real=n1.real+n2.real;
	res.imaginary=n1.imaginary+n2.imaginary;
	printf("sum = %.1f + %.1f i",res.real,res.imaginary);
}
