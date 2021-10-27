/*
 * main.c
 *
 *
 *      Author: shimaa
 */

#include <stdio.h>
int main()
{float a;
float b;
float temp;
printf("Enter value of a:");
fflush(stdout);
scanf("%f",&a);
printf("Enter value of b:");
fflush(stdout);
scanf("%f",&b);
temp=a;
a=b;
b=temp;
printf("After swapping, value of a = %f \n After swapping, value of b = %10f",a,b);



}
