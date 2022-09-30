/*
 ============================================================================
 Name        : Ex2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description :  C program to check vowel or consonant, Ansi-style
 ============================================================================
 */

#include <stdio.h>
int main()
{char c;/* variable to take a character*/
printf("Enter an alphabet:");/*print it to ask user to enter a character*/
fflush(stdout);
scanf("%c",&c);/*take the character and save it in c*/
if(c=='a'||c=='o'||c=='i'||c=='u'||c=='e') /*check if character is vowel */
{printf("%c is a vowel",c);/*print that the character is vowel*/
}
else /*in case character not vowel*/
{printf("%c is a consonant",c);/*print that the character is consonant*/}
return 0;}
