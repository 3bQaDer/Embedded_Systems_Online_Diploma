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
struct employee{
	int ID;
	char name [50];
};
int main(){
	struct employee arr[3]={ {1,"Ahmed"},{2,"Mohamed"},{3,"Ali"} };
	struct employee* pt[3];
	for(int i =0;i<3;i++){
		pt[i]=&arr[i];
	}
	for(int i =0;i<3;i++){
		printf("name of employee[%d]: %s \n",i+1,pt[i]->name);
		printf("Id of employee[%d]: %d \n\n",i+1,pt[i]->ID);
	}
	return 0;
}
