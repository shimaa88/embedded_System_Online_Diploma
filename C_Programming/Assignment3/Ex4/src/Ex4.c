/*
 ============================================================================
 Name        : Ex4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description :  C programe to calculate power of a number, Ansi-style
 ============================================================================
 */

#include <stdio.h>
/*function to calculate power of a number*/
int calc_Power(int n,int p);
int main(void) {
	int base_Num,power;
	printf("Enter a base number: ");
	fflush(stdout);
	scanf("%d",&base_Num);
	printf("Enter power number(positive integer): ");
	fflush(stdout);
	scanf("%d",&power);
	printf("%d^%d =%d ",base_Num,power,calc_Power(base_Num,power));
	return 0;
}
int calc_Power(int n,int p)
{
 if(p==1)
	 return n;
 return n*calc_Power(n,--p);

}
