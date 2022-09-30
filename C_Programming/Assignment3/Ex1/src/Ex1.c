/*
 ============================================================================
 Name        : Ex1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description :  C prime numbers between two intervals , Ansi-style
 ============================================================================
 */

#include <stdio.h>
/*function to print prime numbers between two intervals*/
void prime_Numbers(int n1,int n2);
int main(void) {
	int num1,num2;
	printf("Enter two numbers(intervals):");/*ask user to enter two numbers*/
	fflush(stdout);
	scanf("%d %d",&num1,&num2);
	prime_Numbers(num1,num2);/*call function to print prime numbers between two intervals*/
	return 0;
}
/*function to print prime numbers between two intervals*/
void prime_Numbers(int n1,int n2)
{int i,j;
printf("Prime numbers between %d and %d are :",n1,n2);
fflush(stdout);
for(i=n1+1;i<n2;i++)
{
	for(j=2;j<i;j++)
	{
		if(i%j==0)
		{break;}
		if(j+1==i)
		{
			printf("%d\t",i);/*print prime number*/
			fflush(stdout);
		}
	}

}

}
