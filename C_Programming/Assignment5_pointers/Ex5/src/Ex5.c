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
struct Semployee{
	char Name[50];
	int id;
};
int main(void) {
	struct Semployee emp={"Alex",1002};/*struct initialization*/
	struct Semployee (*pemp[])={&emp};/*array of pointer to struct*/
	struct Semployee (*(*pt)[])=&pemp;
	printf("ExemployeeName : %s\nExemployeeID : %d",((*(*pt))->Name),((*(*pt))->id));

	return 0;
}
