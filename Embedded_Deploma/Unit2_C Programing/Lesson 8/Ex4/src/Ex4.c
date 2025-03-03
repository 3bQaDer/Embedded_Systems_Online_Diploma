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
	int n;
	printf("enter number of elements (max 15): ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	int arr[n];
	int i;
	for(i=0;i<n;i++){
			printf("element[%d] : ",i+1);
			fflush(stdin);fflush(stdout);
			scanf("%d",&arr[i]);
		}
	int* pt=arr+n-1;
	printf("The elements in reversed order: \n");
	for(i=0;i<n;i++){
		printf("element[%d]: %d\n",n-i,*(pt-i));
	}
	return 0;
}
