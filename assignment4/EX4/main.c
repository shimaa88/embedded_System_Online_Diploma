/*
 * main.c
 *
 *  Created on: Nov 6, 2021
 *      Author: shimaa
 */
#include<stdio.h>
int pow(int base,int power);
int main()
{int b,p;
printf("Enter base number:");
fflush(stdout);
scanf("%d",&b);
do
{printf("Enter power number(positive integer):");
fflush(stdout);
scanf("%d",&p);}
while(p<=0);

printf("%d ^ %d = %d",b,p,pow(b,p));

}
int pow(int base,int power)
{int sum=1;
if(power==0)
	return 1;
sum*=pow(base,power-1);
	return(sum*base);

}

