
/*
 * main.c
 *
 *
 *      Author: shimaa
 */
#include <stdio.h>
int main()
{char op;
float num1,num2;
printf("Enter operator either + or - or * or divide:");
fflush(stdout);
scanf("%c",&op);
printf("Enter two operands:");
fflush(stdout);
scanf("%f %f",&num1,&num2);
switch(op)
{case '+':{printf("%f+%f=%f",num1,num2,(num1+num2));
	fflush(stdout);}break;
case '-':{printf("%f-%f=%f",num1,num2,(num1-num2));
	fflush(stdout);}break;
case '*':{printf("%f*%f=%f",num1,num2,(num1*num2));
	fflush(stdout);}break;
case '/':{if(num2==0){printf("Error");}
else{printf("%f+%f=%f",num1,num2,(num1+num2));
	fflush(stdout);}}break;
default:break;
}}
