/*
 * main.c
 *
 *  Created on: Nov 6, 2021
 *      Author: shimaa
 */

#include<stdio.h>
int fact(int num1);
int main()
{int num;
printf("Enter an positive integer: ");
fflush(stdout);
scanf("%d",&num);
printf("Factorial of %d = %d",num,fact(num));
fflush(stdout);

}
int fact(int num1)
{int sum=1;
	if(num1==1)
	return 1;
	sum*=fact(num1-1);
	return (num1*sum);
}
