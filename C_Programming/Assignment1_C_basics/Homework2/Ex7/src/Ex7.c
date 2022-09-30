/*
 ============================================================================
 Name        : Ex7.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description :  C programe to find factorial of a number, Ansi-style
 ============================================================================
 */

#include <stdio.h>


int main(void) {
	int num,fact=1;/*num:variable to save value and fact: to add to it the factorial */
		printf("Enter an integer");/*ask user to enter an integer*/
		fflush(stdout);
		scanf("%d",&num);
		if(num<0)/*check if number is negative*/
		{printf("Error!!! Factorial of negative number doesn't exist");}
		else
		{
			while(num!=0)
			{fact*=num;
			num--;
			}
			printf("Factorial = %d",fact);
		}

	return 0;
}
