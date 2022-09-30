/*
 ============================================================================
 Name        : Ex6.c
 Author      : shimaa
 Version     :
 Copyright   : Your copyright notice
 Description : Write Source Code to Swap Two Numbers, Ansi-style
 ============================================================================
 */

#include <stdio.h>
int main(void) {
	float a,b;/*a and b are numbers which will be entered by user */
	printf("Enter value of a:"); /*print Enter value of a to ask user to enter a value*/
	fflush(stdout);
	scanf("%f",&a);/*take the value of a from  user and save it */
	printf("Enter value of b:"); /*print Enter value of b to ask user to enter a value*/
	fflush(stdout);
	scanf("%f",&b);/*take the value of a from  user and save it */
    a=a+b;
    b=a-b;
    a=a-b;
    /*i can swap it by temp variable also*/
    printf("After swapping, value of a = %f\n",a);/*print value of a after swapping*/
    fflush(stdout);
    printf("After swapping, value of b = %f",b);/*print value of b after swapping*/
	return 0;
}
