/*
 ============================================================================
 Name        : Ex2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description :  C program to calculate average, Ansi-style
 ============================================================================
 */

#include <stdio.h>
int main(void) {
int num,i,size=100;/*num is the number of elements the user will decide it and size:the size of the array*/
float arr[size],sum=0;/*sum to save summation of elements*/
printf("Enter the numbers of data :");/*ask user to enter number of data*/
fflush(stdout);
scanf("%d",&num);/*take numbers of data from users*/
for( i=0;i<num;i++)
{printf("%d.Enter number: ",i+1);
fflush(stdout);
scanf("%f",&arr[i]);
sum+=arr[i];}
printf("Average = %.2f",sum/num);

	return 0;
}
