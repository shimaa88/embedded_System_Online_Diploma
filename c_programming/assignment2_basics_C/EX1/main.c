/*
 * main.c
 *
 *
 *      Author: shimaa
 */
#include <stdio.h>
int main()
{int num;
printf("Enter an integer you want to check:");
fflush(stdout);
scanf("%d",&num);
if(num%2==0)
{printf("%d is even",num);
fflush(stdout);}
else {printf("%d is odd",num);
fflush(stdout);}



}

