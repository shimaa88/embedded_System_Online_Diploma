/*
 * main.c
 *
 *
 *      Author: shimaa
 */
#include <stdio.h>
int main()
{int num,i;
unsigned int sum=0;
printf("Enter an integer:");
fflush(stdout);
scanf("%d",&num);
for(i=1;i<=num;i++)
{
sum+=i;

}
printf("Sum =%d",sum);
fflush(stdout);


}

