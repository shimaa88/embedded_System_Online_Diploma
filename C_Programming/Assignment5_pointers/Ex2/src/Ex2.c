/*
 ============================================================================
 Name        : Ex2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	char a='A';
	char* alpha=&a;
	char i;
	for(i=0;i<26;i++)
	{
		printf("%c   ",*alpha+i);
	}
	return 0;
}
