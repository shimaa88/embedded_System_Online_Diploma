/*
 ============================================================================
 Name        : Ex6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : C program to calculate sum of natural numbers, Ansi-style
 ============================================================================
 */

#include <stdio.h>


int main(void) {
	int num,sum=0,i;/*variable to save value and sum to add to it the summation in each iteration i used in for */
	printf("Enter an integer");/*ask user to enter an integer*/
	fflush(stdout);
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{sum+=i;}
	printf("Sum= %d",sum);/*print the summation*/
return 0;
}
