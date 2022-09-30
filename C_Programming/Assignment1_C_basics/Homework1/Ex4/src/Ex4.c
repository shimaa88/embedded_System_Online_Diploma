/*
 ============================================================================
 Name        : Ex4.c
 Author      : shimaa
 Version     :
 Copyright   : Your copyright notice
 Description : Write C Program to Multiply two Floating Point Numbers, Ansi-style
 ============================================================================
 */

#include <stdio.h>


int main(void) {
	float number1,number2;/*number1 and number2 which will be entered by user */
	printf("Enter two numbers:"); /*print Enter a two numbers to ask user to enter a value*/
	fflush(stdout);
	scanf("%f %f",&number1,&number2);/*take the values from user and save it in number1 and number2*/
	printf("Product: %f",number1*number2);/*print the summation of two numbers which entered by user*/
	return 0;
}
