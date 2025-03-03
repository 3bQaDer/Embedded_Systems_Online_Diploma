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

int main(void) {
	int n,data,pos,a[10],temp,i;
	printf("Enter number of elements : ");
	fflush(stdout);  fflush(stdin);
	scanf("%d",&n);
	for(i=0;i<n;i++){
		fflush(stdout);  fflush(stdin);
		scanf("%d",&a[i]);
	}
	printf("Enter the elements to be inserted : ");
	fflush(stdout);  fflush(stdin);
	scanf("%d",&data);
	printf("Enter the location : ");
	fflush(stdout);  fflush(stdin);
	scanf("%d",&pos);
	temp=n;
	while(temp!=pos-1){
		a[temp]=a[temp-1];
		temp--;
	}
	a[pos-1]=data;
	for(i=0;i<n+1;i++){
		printf("%d",a[i]);
	}
	return 0;
}
