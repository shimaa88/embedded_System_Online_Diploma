/*
 ============================================================================
 Name        : Ex4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	int arr[15];
	int num;
	int*parr=arr;
	int i;
	printf("Input the number of elements to store in the array(max 15) : ");
	fflush(stdout);
	scanf("%d",&num);
	printf("Input %d number of elements  in the array: \n",num);
	for(i=0;i<num;i++)
		{  printf("element - : %d",i+1);
		 fflush(stdout);
		 scanf("%d",(parr+i));
		}
	parr=&arr[num-1];

	printf("The elements of array in reverse order are  \n");

	for(i=num;i>0;i--)
	{
		printf("element -%d : %d\n",i,*parr);

       parr--;

	}
	return 0;
}
