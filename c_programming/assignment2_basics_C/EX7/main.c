/*
 * main.c
 *
 *
 *      Author: shimaa
 */
#include <stdio.h>
int main()
{int num;
long fact=1;
printf("Enter an integer:");
fflush(stdout);
scanf("%d",&num);
if(num<0)
{printf("Error!!! Factorial of negative number doesn't exist");
fflush(stdout);}
else if(num==0)
{printf("Factorial =1");}
else {for(int i=1;i<=num;i++)
{fact*=i;}
printf("Factorial =%ld",fact);
fflush(stdout);}



}

