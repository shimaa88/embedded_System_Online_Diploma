/*
 ============================================================================
 Name        : Ex5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
void reverse_array(int n[],int s);
#define SIZE 50
int main(void) {
	int arr[SIZE];
		int size,i;
		printf("Enter size of array");
		fflush(stdout);
		scanf("%d",&size);
		printf("enter elements of array");
		fflush(stdout);
		for(i=0;i<size;i++)
		{printf("Enter a%d ",i+1);
		fflush(stdout);
		scanf("%d",&arr[i]);
		}
		reverse_array(arr,size);
		printf("elements of array after reverse\n");
		fflush(stdout);
	    for(i=0;i<size;i++)
	    {
	    	printf("%d\t",arr[i]);
			fflush(stdout);

		}

	return 0;
}
void reverse_array(int n[],int s)
{int i;
for(i=0;i<s/2;i++)
{n[i]=n[i]+n[s-i-1];
n[s-i-1]=n[i]-n[s-i-1];
n[i]=n[i]-n[s-i-1];

}

}
