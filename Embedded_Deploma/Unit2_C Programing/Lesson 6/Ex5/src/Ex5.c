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
#define PI 3.1415
#define Area(r) (PI*(r)*(r))
int main(){
	int radius;
	float area;
	printf("Enter the radius: ");
	fflush(stdout);  fflush(stdin);
	scanf("%d", &radius);
	area=Area(radius);
	printf("area = %.2f",area);
	return 0;
}
