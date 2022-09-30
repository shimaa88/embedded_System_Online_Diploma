/*
 ============================================================================
 Name        : Ex2.c
 Author      : shimaa
 Version     :
 Copyright   : Your copyright notice
 Description : Write C Program to Print an Integer Entered by a User, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	int number;/*number which will be entered by user */
	printf("Enter a integer:"); /*print Enter a integer to ask user to enter a value*/
	fflush(stdout);
	scanf("%d",&number);/*take the value from user and save it in number*/
	printf("You entered: %d",number);/*print the value of the number which entered by user*/
	return 0;
}
