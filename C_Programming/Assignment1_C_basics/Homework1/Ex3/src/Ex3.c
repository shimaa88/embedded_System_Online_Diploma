/*
 ============================================================================
 Name        : Ex3.c
 Author      : shimaa
 Version     :
 Copyright   : Your copyright notice
 Description : Write C Program to Add Two Integers, Ansi-style
 ============================================================================
 */

#include <stdio.h>


int main(void) {
	int number1,number2;/*number1 and number2 which will be entered by user */
	printf("Enter two integers:"); /*print Enter a integer to ask user to enter a value*/
	fflush(stdout);
	scanf("%d %d",&number1,&number2);/*take the values from user and save it in number1 and number2*/
	printf("Sum: %d",number1+number2);/*print the summation of two numbers which entered by user*/
	return 0;
}
