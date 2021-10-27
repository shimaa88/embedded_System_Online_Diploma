
/*
 * main.c
 *
 *
 *      Author: shimaa
 */
#include <stdio.h>
int main()
{float num;
printf("Enter a number:");
fflush(stdout);
scanf("%f",&num);
if(num>0)
{printf("%f is positive",num);
fflush(stdout);}
else if(num<0) {printf("%f is negative",num);
fflush(stdout);}
else {printf("You entered zero.");
fflush(stdout);}



}

