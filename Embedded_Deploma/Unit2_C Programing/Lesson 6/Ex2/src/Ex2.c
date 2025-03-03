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
struct sDistance{
	int feet;
	float inches;
};
void printSum(struct sDistance ,struct sDistance);
int main(void) {
	setvbuf(stdout,NULL,_IONBF,0);
	struct sDistance d1,d2;
	printf("Enter 1st distance\n");
	printf("Enter feet:");
	scanf("%d",&d1.feet);
	printf("Enter inches:");
	scanf("%f",&d1.inches);
	setvbuf(stdout,NULL,_IONBF,0);
	printf("Enter 2nd distance\n");
	printf("Enter feet:");
	scanf("%d",&d2.feet);
	printf("Enter inches:");
	scanf("%f",&d2.inches);
	printSum(d1,d2);
	return 0;
}
void printSum(struct sDistance d1,struct sDistance d2){
	int count=0;
	struct sDistance res;
	res.inches=d1.inches+d2.inches;
	if(res.inches>12){
		count=res.inches/12;
	}
	res.inches-=count*12;
	res.feet=d1.feet+d2.feet+count;
	printf("sum of distance=%d\'-%.2f\"",res.feet,res.inches);
}
