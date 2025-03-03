/*
 * L_list.h
 *
 *  Created on: Jul 22, 2023
 *      Author: 3bQaDer
 */

#ifndef L_LIST_H_
#define L_LIST_H_

//Libraries
#include "stdio.h"
#include "Stdlib.h"
#include "string.h"
#include "conio.h"
#include "stdint.h"

//type definition

struct Sdata{
	unsigned int ID;
	char Name[40];
	float Height;
};

struct Sstudent {
	struct Sdata studentData;
	struct Sstudent* PnextStudent;
};

typedef enum
{
    List_no_error,
    Not_found,
    List_empty,
    List_full

}L_list_status;

//APIs :

//Main APIs
L_list_status Add_student();
L_list_status Delete_student();
void Print_students();
void Delete_All();

//Special APIs
L_list_status Get_Nth_student();
L_list_status Get_Nth_student_backward();
void Get_Length();
void Find_middle();
void reverse_list();




#endif /* L_LIST_H_ */
