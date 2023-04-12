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
#include <string.h>
struct Sstudent{
	char Name[50];
	int rollNum;
	float marks;
};
void printStudent(struct Sstudent);
int main(void) {
	setvbuf(stdout,NULL,_IONBF,0);
	struct Sstudent s;
	printf("Enter information of student\n");
	printf("Enter name:");
	gets(s.Name);
	printf("Enter roll number: ");
	scanf("%d",&s.rollNum);
	printf("Enter marks: ");
	scanf("%f",&s.marks);
	printf("Displaying information: \n");
	printStudent(s);
	return 0;
}
void printStudent(struct Sstudent s){
	printf("name: %s\n",s.Name);
	printf("Roll number: %d\n",s.rollNum);
	printf("Marks: %.2f\n",s.marks);
}
