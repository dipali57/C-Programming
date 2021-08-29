/*Rotate matrix in anti clockwise direction
1 2 3
4 5 6
7 8 9
  ^
  |
3 6 9
2 5 8
1 4 7*/

#include<stdio.h>
int main()
{
int matrix[5][5],row=0,col=0;

printf("Enter row:\n");
scanf("%d",&row);

printf("Enter col:\n");
scanf("%d",&col);

printf("Enter elements:\n");
for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			scanf("%d",&matrix[i][j]);
		}
		printf("\n");
	}

printf("Display given matrix:\n");
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			printf("%d ",matrix[i][j]);
		}
		printf("\n");
	}

	printf("First Transpose the matrix:\n");
int temp=0;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<=i;j++)
		{
			temp=matrix[i][j];
			matrix[i][j]=matrix[j][i];
			matrix[j][i]=temp;
		}
	}

	printf("Then interchange the first and last row then swap middle order of row :\n");

	for(int i=0;i<row/2;i++)
	{
		for(int j=0;j<col;j++)
		{
			temp=matrix[i][j];
			matrix[i][j]=matrix[col-1-i][j];
			matrix[col-1-i][j]=temp;

		}
	}
	printf("Dispay after performing operation:\n");

	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			printf("%d ",matrix[i][j]);
		}
		printf("\n");
	}
	return 0;
}
/*


Display given matrix:
1 2 3 4
5 6 7 8
2 4 6 8
5 7 9 3			
First Transpose the matrix:
1 5 2 5
2 6 4 7
3 7 6 9
4 8 8 2

Then interchange the first and last row then swap middle order of row :
1 5 2 5			00 01 02 03			[i=4-1-0=3][0]   [i=4-1-0=3][1]	[i=4-1-0=3][2]	[i=4-1-0=3][3] 		30 31 32 33
2 6 4 7			10 11 12 13			[i=4-1-1=2][0]	 [i=4-1-1=2][1]	[i=4-1-1=2][2]	[i=4-1-1=2][3]		21 21 22 23
3 7 6 9	----->	20 21 22 23	----->	[i=4-1-2=1][0]	 [i=4-1-2=1][1]	[i=4-1-2=1][2]	[i=4-1-2=1][3]--->	10 11 12 13
4 8 8 2 		30 31 32 33			[i=4-1-3=0][0]   [i=4-1-3=0][1]	[i=4-1-3=0][2]	[i=4-1-3=0][3]		00 01 02 03

Dispay after performing operation:
4 8 8 3
3 7 6 9
2 6 4 7
1 5 2 5
*/


