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
struct student{
	char name[50];
	int roll;
	float marks;
};
void display(struct student[],int);
int main(void) {
	struct student s[10];
	printf("Enter info\n");
	for(int i=0;i<10;i++){
		printf("For roll number %d\n",i+1);
		s[i].roll=i+1;
		printf("Enter name:");
		fflush(stdin);  fflush(stdout);
		gets(s[i].name);
		printf("Enter marks:");
		fflush(stdin);  fflush(stdout);
		scanf("%f",&s[i].marks);
	}
	display(s,10);
	return 0;
}
void display(struct student s[],int size)
{
	printf("\nDisplaying Info\n");
	for(int i=0 ; i<size ; i++)
	{
		printf("Information of roll number %d:\n",s[i].roll);
		printf("Name: %s\nMarks: %.2f\n",s[i].name,s[i].marks);
	}
}
