/*
 * L_list.c
 *
 *  Created on: Jul 22, 2023
 *      Author: 3bQaDer
 */
#include "L_list.h"

//creating the head of the list
struct Sstudent* head = NULL;

/*** API to add new student to the list ***/
L_list_status Add_student(){
	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);

	struct Sstudent* new_student = (struct Sstudent*)malloc(sizeof(struct Sstudent));

	//check if the node created in the memory
	if(new_student == NULL)
	{
		printf("**** Failed to add new student ****");
		return List_full;
	}

	//check if the list is empty or not
	if (head == NULL){
		head = new_student;
	}else
	{
		struct Sstudent* temp = head ;
		while(temp->PnextStudent != NULL){
			temp = temp->PnextStudent;
		}
		temp->PnextStudent = new_student;
	}

	//assigning the data to the new node

	printf("Enter Student ID: \n");
	scanf("%d",&new_student->studentData.ID);

	printf("Enter Student full name: \n");
	scanf("%s",new_student->studentData.Name);

	printf("Enter Student height: \n");
	scanf("%f",&new_student->studentData.Height);

	new_student->PnextStudent = NULL;

	printf("\n------------------------\n");

	return List_no_error;
}
/*** API to delete a student from the list ***/
L_list_status Delete_student(){

	setvbuf(stdout,NULL,_IONBF,0);

	//checks if the list is empty or not
	if(head == NULL){
		printf("\n*** List is Empty ***\n=============================\n");
		return List_empty ;
	}

	//Ask the user for the id of the student to be deleted
	unsigned int ID;
	printf("Enter The ID of the student: \n");
	scanf("%d",&ID);

	struct Sstudent* Del_std = head ;
	struct Sstudent* prev_std = head ;

	//traverse the list to reach the required node to be deleted
	while(Del_std){
		if(Del_std->studentData.ID == ID)
		{
			prev_std->PnextStudent = Del_std->PnextStudent;  //connect the part before the deleted student with the one after it
			free(Del_std);
			return List_no_error ;
		}
		prev_std = Del_std;
		Del_std = Del_std->PnextStudent;  //move the two pointers to try to find the required student

	}
	printf("*** Student not found ***");
	return Not_found;
}

void Print_students(){
	if(head == NULL) //Check if list is empty
		printf("\n*** List is Empty ***\n=============================\n");
	else
	{
		printf("\n*** Students info ***\n");
		unsigned int i=1;
		struct Sstudent* temp = head;
		while(temp != NULL)
		{
			printf("Record %d:\n",i);
			printf("\tID = %d\n",temp->studentData.ID);
			printf("\tNAME = %s\n",temp->studentData.Name);
			printf("\tHEIGHT = %.2f\n",temp->studentData.Height);
			temp = temp->PnextStudent;
			i++;
		}
		printf("\n-------------------------\n");
	}
}

void Delete_All(){

	if(head == NULL)        //Check if list is empty
		printf("\n*** List is Empty ***\n=============================\n");
	else
	{
		struct Sstudent* current = head;
		struct Sstudent* temp;
		while(current != NULL)
		{
			temp = current;
			current = current->PnextStudent;
			free(temp);
		}
		head = NULL;
	}
}

//Special APIs
L_list_status Get_Nth_student(){

	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);

	if(head == NULL)        //Check if list is empty
		printf("\n*** List is Empty ***\n=============================\n");
	else
	{
		unsigned int pos;
		printf("\nEnter the position of the student\n");
		scanf("%d",&pos);
		int i=pos;
		struct Sstudent* temp = head;
		while (i > 1){
			temp=temp->PnextStudent;
			i--;
			if(temp == NULL){
				printf("\nPosition is out of index\n");
				return Not_found;
			}
		}
		printf("The information of the student at position %d is :\n",pos);
		printf("\n-------------------------------\n");
		printf("\tID = %d\n",temp->studentData.ID);
		printf("\tNAME = %s\n",temp->studentData.Name);
		printf("\tHEIGHT = %.2f\n",temp->studentData.Height);
		printf("\n-------------------------------\n");
		return List_no_error;
	}
	return List_empty;
}

L_list_status Get_Nth_student_backward(){

	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);

	if(head == NULL)        //Check if list is empty
		printf("\n*** List is Empty ***\n=============================\n");
	else
	{
		unsigned count=0;
		        struct Sstudent* fast = head;
		        struct Sstudent* slow = head;
		        unsigned int index;
		        printf("Enter the index number: \n");
		        scanf("%d",&index);
		        while(index)
		        {
		            if(fast = fast->PnextStudent);
		            else
		            {
		               printf("\n========Index Not Found========\n");
		               return Not_found;
		            }

		            index--;
		            count++;
		        }
		        while(fast)
		        {
		            slow = slow->PnextStudent;
		            fast = fast->PnextStudent;
		        }
		printf("\n\tThe info of student at position\"backward\" %d is : \n ",index);
		printf("\n-------------------------------\n");
		printf("\tID = %d\n",slow->studentData.ID);
		printf("\tNAME = %s\n",slow->studentData.Name);
		printf("\tHEIGHT = %.2f\n",slow->studentData.Height);
		printf("\n-------------------------------\n");
		return List_no_error;
	}

	return List_empty;
}

void Get_Length(){
	if(head == NULL) //Check if list is empty
		printf("\n*** List is Empty ***\n=============================\n");
	else
	{
		printf("*** Students info ***\n");
		unsigned int i=1;
		struct Sstudent* temp = head;
		while(temp != NULL)
		{
			temp = temp->PnextStudent;
			i++;
		}
		printf("\nLength of the list = %d",i);
		printf("\n-------------------------\n");
	}
}

void Find_middle(){
	if(head == NULL) //Check if list is empty
		printf("\n*** List is Empty ***\n=============================\n");
	else if(head->PnextStudent==NULL)
		printf("\n*** The list has only one student ***\n");
	else
	{
		struct Sstudent* fast = head;
		struct Sstudent* slow = head;

		while (fast->PnextStudent){
			fast=fast->PnextStudent;
			slow=slow->PnextStudent;
			if(fast=fast->PnextStudent);
			else
				break;
		}
		printf("*** Middle student info *** : \n ");
		printf("\n-------------------------------\n");
		printf("\tID = %d\n",slow->studentData.ID);
		printf("\tNAME = %s\n",slow->studentData.Name);
		printf("\tHEIGHT = %.2f\n",slow->studentData.Height);
		printf("\n-------------------------------\n");
	}
}
void reverse_list(){

	if(head == NULL) //Check if list is empty
		printf("\n*** List is Empty ***\n=============================\n");
	else if(head->PnextStudent == NULL)
	{
		printf("\n*** List has only one student ***\n");
	}
	else
	{
		struct Sstudent* fast = head;
		struct Sstudent* slow = NULL;

		while(fast)
		{
			fast = head->PnextStudent;
			head->PnextStudent=slow;
			slow=head;
			head= fast;
		}
		head=slow;
	}
}












