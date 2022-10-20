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

int main(void) {
	int num;
	printf("enter number: ");
	fflush(stdout);
	scanf("%d",&num);
	if(num&8)
	{printf("the bit is %d",1);}
	else {printf("the bit is %d",0);}
	return 0;
}
