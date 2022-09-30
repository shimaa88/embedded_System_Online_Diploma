/*
 ============================================================================
 Name        : Ex1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : C program to check if the number is even or odd, Ansi-style
 ============================================================================
 */

#include <stdio.h>


int main(void) {
	int number;/*number to save value which will be entered by user*/
	printf("Enter an integer you want to check :"); /* ask user to enter a number */
	fflush(stdout);
	scanf("%d",&number);//save the value in number
	if(number%2==0)
	{	printf("%d is even.",number); /* print that the number is even */}
	else
	{	printf("%d is odd.",number); /* print that the number is odd */}
	return 0;
}
