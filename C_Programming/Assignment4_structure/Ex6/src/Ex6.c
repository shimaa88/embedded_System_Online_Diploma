/*
 ============================================================================
 Name        : Ex6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
union job{
	char name[32];
	float salary;
	int worker_no;
}u;
struct job1{
	char name[32];
	float salary;
	int worker_no;
}s;
int main(void) {
	printf("size of union =%d\n",sizeof(u));
	printf("size of struct =%d",sizeof(s));
	return 0;
}
