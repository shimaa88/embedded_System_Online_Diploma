/*
 ============================================================================
 Name        : Ex1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int check_Power(int num);
int main(void) {
	int num,result;
	printf("Enter a number");
	fflush(stdout);
	scanf("%d",&num);
	result=check_Power(num);
	if(result==0)
	{printf("number is power of 3");
	fflush(stdout);}
	else
	{printf("number is not power of 3");
		fflush(stdout);}
	return 0;
}
int check_Power(int num)
{if(num<=0)
	{return 0;}
 while(num>1)
{if(num%3!=0)
	return 1;
   num/=3;
	}
return 0;


}
