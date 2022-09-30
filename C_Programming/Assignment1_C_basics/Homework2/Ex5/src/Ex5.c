/*
 ============================================================================
 Name        : Ex5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : C programe to check if the character is alphabet or not, Ansi-style
 ============================================================================
 */

#include <stdio.h>


int main(void) {
	char c;/*variable to save character*/
	printf("Enter a character");/*ask user to enter an character*/
	fflush(stdout);
	scanf("%c",&c);/*take the character value*/
	if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))/*check that the character is an alphabet*/
	{
		printf("%c is an alphabet",c);/*print that the character is an alphabet*/

	}
	else /*in case character not an alphabet*/
	{printf("%c is not an alphabet",c);/*print that the character not an alphabet*/}
return 0;
}
