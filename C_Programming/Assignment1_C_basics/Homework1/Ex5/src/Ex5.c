/*
 ============================================================================
 Name        : Ex5.c
 Author      : shimaa
 Version     :
 Copyright   : Your copyright notice
 Description : write C Program to Find ASCII Value of a Character, Ansi-style
 ============================================================================
 */

#include <stdio.h>
int main(void) {
	char c;/*c is a character which will be entered by user */
	printf("Enter a character:"); /*print Enter a character to ask user to enter a value*/
	fflush(stdout);
	scanf("%c",&c);/*take the value from user and save it in c*/
	printf("ASCII value of %c = %d",c,c);/*print the ascii value of the character which entered by user*/
	return 0;
}
