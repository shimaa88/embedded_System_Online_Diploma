/*
 ============================================================================
 Name        : Ex3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : C program to reverse a sentence using recursion, Ansi-style
 ============================================================================
 */
#define SIZE 50
/*function to reverse a sentence*/
void reverse_Sentense(char n[],int size);
#include <stdio.h>
#include <string.h>
int main(void) {
	char text[SIZE];
	printf("Enter a sentence : ");/*ask user to enter a sentence*/
	fflush(stdout);
	fgets(text,SIZE,stdin);
	reverse_Sentense(text,strlen(text)-1);
	return 0;
}
/*function to reverse a sentence*/
void reverse_Sentense(char n[],int size)
{
	if(size==-1)
	return;
	printf("%c",n[size]);
    fflush(stdout);
	return 	reverse_Sentense(n,--size);

}
