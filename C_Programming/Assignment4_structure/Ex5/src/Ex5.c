/*
 ============================================================================
 Name        : Ex5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : C program to find area of a circle, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#define Area_Of_Circle(r) 3.14*r*r
int main(void) {
	int num;
	printf("enter number");
	fflush(stdout);
	scanf("%d",&num);
	printf("Area of the circle = %f",Area_Of_Circle(num));
	return 0 ;
}
