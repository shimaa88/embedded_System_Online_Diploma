/*
 * main.c
 *
 *  Created on: Nov 6, 2021
 *      Author: shimaa
 */

#include<stdio.h>
void prime_num(int number1,int number2);
int main()
{int number1,number2;
printf("Enter two numbers (intervals): ");
fflush(stdout);
scanf("%d %d",&number1,&number2);

prime_num(number1,number2);




}
void prime_num(int num1,int num2)
{int i;
int j,flag=0;
printf("prime numbers between %d and %d are:",num1,num2);
fflush(stdout);
for(i=num1+1;i<num2;i++)
{for (j=2;j<i/2;j++)
{if(i%j==0)
{flag=1;}
}
if(flag==0)
{printf("%d ",i);
fflush(stdout);
}flag=0;

}
}
