/*
 ============================================================================
 Name        : Ex1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : C program to find the frequency of characters in a string , Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	char String [50];
	char c;/*character which will be counted */
	int count=0;/*count to know how many times the character is repeated*/
	int i;
	printf("Enter a String:");/*ask user to enter an string*/
	fflush(stdout);
	gets(String);
	printf("Enter a character to find frequency:");
	fflush(stdout);
	scanf("%c",&c);
	for(i=0;String[i]!=0;i++)
	{
		if(String[i]==c)
		{count++;}
	}
	printf("Frequency of %c = %d",c,count);
	return 0;
}
