/*
 * main.c
 *
 *  Created on: Nov 6, 2021
 *      Author:shimaa
 */

#include<stdio.h>
#include <string.h>
void reversr(char arr[],int s);
int main()
{char ar[100];
printf("Enter a sentence:");
fflush(stdout);
gets(ar);
reversr(ar,strlen(ar));
printf("%s",ar);
fflush(stdout);
	}
void reversr(char arr[],int s)
{char temp;
int i;
for(i=0;i<s/2;i++)
{temp=arr[i];
arr[i]=arr[s-i-1];
arr[s-i-1]=temp;

}
arr[s]=0;
}
