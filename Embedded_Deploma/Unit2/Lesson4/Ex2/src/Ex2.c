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
	int i,n;
	float sum =0,nums[50];
	printf("Enter the number of data :");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);
	if (n==0){
		printf("wrong number of elements !!!");
	}else{
		for (i=0;i<n;i++){
			printf("%d. Enter number : ",i+1);
			fflush(stdin); 	fflush(stdout);
			scanf("%f",&nums[i]);
			sum +=nums[i];

		}
		printf("Average = %0.2f",sum/n);
	}
	return 0;
}
