/*
 ============================================================================
 Name        : Ex3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description :C programe to find largest number among three numbers , Ansi-style
 ============================================================================
 */

#include <stdio.h>
 int main()
 {float num1,num2,num3;/*numbers to save the values which will be entered by user*/
 printf("Enter three numbers:");/*print to ask user to enter three numbers*/
 fflush(stdout);
 scanf("%f %f %f",&num1,&num2,&num3);/*take values from user*/
 if(num1>num2)
	 {if(num1>num3)
	 {printf("Largest number= %f",num1);}}
 else if (num3>num2)
 {if(num3>num1)
 {printf("Largest number= %f",num3);}}
 else printf("Largest number= %f",num2);
	 return 0;}
