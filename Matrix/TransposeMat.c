//Transpose of matrix

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

printf("\nTranspose of given matrix is:\n");
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