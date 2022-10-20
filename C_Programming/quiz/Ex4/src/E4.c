/*
 ============================================================================
 Name        : E4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
int index(int n[],int s,int num);

#define SIZE 50

int main(void) {
	int arr[SIZE];
	int size,i,result,num;
	printf("Enter size of array");
	fflush(stdout);
	scanf("%d",&size);
	printf("enter elements of array");
	fflush(stdout);
	for(i=0;i<size;i++)
	{printf("Enter a%d",i+1);
	fflush(stdout);
	scanf("%d",&arr[i]);
	}
	printf("Enter number to search about it");
		fflush(stdout);
		scanf("%d",&num);
	result=index(arr,size,num);
	if(result==-1)
		printf("not found");
	else
		printf("last occurrence at position %d",result);

	return 0;
}
int index(int n[],int s,int num)
{int last=-1;
int i;
for(i=s-1;i>=0;i--)
{if(n[i]==num)
{last=i;
break;}}
return last;
	}
