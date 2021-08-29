//Print matrix in snake pattern

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


printf("\nDisplay matrix in snake pattern:\n");

	for(int i=0;i<row;i++)
	{
		if(i%2==0)
		{
			for(int j=0;j<col;j++)
			{
				printf("%d -> ",matrix[i][j]);
			}
			printf("\n");
		}
		else 
		{
			for(int j=col-1;j>=0;j--)
			{
				printf("%d <- ",matrix[i][j]);
			}
			printf("\n");
		}
	}
	return 0;


}


/*
Display given matrix:
10 20 30 40
50 60 70 80
27 28 29 48
32 35 34 50

Display matrix in snake pattern:
10 -> 20 -> 30 -> 40 ->
80 <- 70 <- 60 <- 50 <-
27 -> 28 -> 29 -> 48 ->
50 <- 34 <- 35 <- 32 <-
*/