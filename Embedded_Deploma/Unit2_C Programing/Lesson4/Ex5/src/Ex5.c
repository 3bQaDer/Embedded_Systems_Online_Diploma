/*
 ============================================================================
 Name        : Ex5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int flag=0, n,data,a[10],i;
	printf("Enter number of elements : ");
	fflush(stdout);  fflush(stdin);
	scanf("%d",&n);
	for(i=0;i<n;i++){
		fflush(stdout);  fflush(stdin);
		scanf("%d",&a[i]);
	}
	printf("Enter the element to be searched : ");
	fflush(stdout);  fflush(stdin);
	scanf("%d",&data);
	for(i=0;i<n;i++){
		if(a[i]==data){
			printf("number found at location : %d",i+1);
			flag=1;
			break;
		}
	}
	if(flag==0)
		printf("sorry!! number is not here");


	return 0;
}
