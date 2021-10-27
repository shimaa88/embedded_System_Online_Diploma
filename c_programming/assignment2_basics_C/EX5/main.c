

/*
 * main.c
 *
 *
 *      Author: shimaa
 */
#include <stdio.h>
int main()
{char c;
printf("Enter a character:");
fflush(stdout);
scanf("%c",&c);
if(((c>='A')&&(c<='Z'))||((c>='a')&&(c<='z')))
{printf("%c is an alphabet",c);
fflush(stdout);}
else {printf("%c is not an alphabet",c);
fflush(stdout);}



}

