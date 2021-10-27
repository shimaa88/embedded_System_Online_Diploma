/*
 * main.c
 *
 *
 *      Author: shimaa
 */
#include <stdio.h>
int main()
{char c;
printf("Enter an alphabet:");
fflush(stdout);
scanf("%c",&c);
if((c=='o')||(c=='O')||(c=='i')||(c=='I')||(c=='a')||(c=='A')||(c=='u')||(c=='U')||(c=='e')||(c=='E'))
{printf("%c is a vowel",c);
fflush(stdout);}
else {printf("%c is consonant",c);
fflush(stdout);}



}

