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

int main(void) {
	int i,j,rows,colms,a[50][50];
	printf("Enter the rows and column of the matrix :");
	fflush(stdout);  fflush(stdin);
	scanf("%d %d",&rows,&colms);
	for(i=0;i<rows;i++){
		for(j=0;j<colms;j++){
			printf("Enter element a[%d][%d] : ",i+1,j+1);
			fflush(stdout);  fflush(stdin);
			scanf("%d",&a[i][j]);

		}

	}
	printf("Entered matrix : \n");
	for(i=0;i<rows;i++){
		for(j=0;j<colms;j++){
			printf("%d \t",a[i][j]);
		}
		printf("\n");
	}
	printf("Transpose matrix : \n");
	for(i=0;i<colms;i++){
		for(j=0;j<rows;j++){
			printf("%d \t",a[j][i]);
		}
		printf("\n");
	}

	return 0;
}
