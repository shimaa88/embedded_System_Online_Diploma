/*
 ============================================================================
 Name        : Ex3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : C programe to find transpose of a matrix, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#define SIZE 100 /*size of the matrix*/
int main(void) {
	int rows,cols;/*rows and cols will be detemined by user*/
	int matrix[SIZE][SIZE],transpose_matrix[SIZE][SIZE];/*matrix to save elements*/
	int i,j;/*iterators for for loop*/
	printf("Enter rows and column of matrix :");/*ask user to enter number of rows and columns*/
	fflush(stdout);
	scanf("%d %d",&rows,&cols);/*take number of rows and columns from user*/
   printf("Enter elements of matrix:\n");/*ask user to enter elements*/
   fflush(stdout);
	for(i=0;i<rows;i++)
	{for(j=0;j<cols;j++)
	{	printf("Enter elements a%d%d: ",i+1,j+1);
		fflush(stdout);
		scanf("%d",&matrix[i][j]);}}
	  printf("Entered matrix:\n");/*print elements of entered matrix*/
	for(i=0;i<rows;i++)
	{for(j=0;j<cols;j++)
	{	printf("%d\t",matrix[i][j]);
		fflush(stdout);
	}	printf("\n");
	fflush(stdout);}
	 /*to transpose matrix */
		for(i=0;i<rows;i++)
		{for(j=0;j<cols;j++)
		{transpose_matrix[j][i]=matrix[i][j];}}
		  printf("Transpose of matrix:\n");/* print transpose of matrix*/
			for(i=0;i<cols;i++)
			{for(j=0;j<rows;j++)
			{printf("%d\t",transpose_matrix[i][j]);
				fflush(stdout);
			}	printf("\n");
			fflush(stdout);}
	return 0;
}
