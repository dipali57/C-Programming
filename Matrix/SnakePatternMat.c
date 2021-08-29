//Print matrix in snake pattern

#include<stdio.h>
int main()
{
int matrix[10][10]={{10,20,30,40},{50,60,70,80},{27,28,29,48},{32,35,34,50}};


printf("Display given matrix:\n");
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			printf("%d ",matrix[i][j]);
		}
		printf("\n");
	}


printf("\nDisplay matrix in snake pattern:\n");

	for(int i=0;i<4;i++)
	{
		if(i%2==0)
		{
			for(int j=0;j<4;j++)
			{
				printf("%d -> ",matrix[i][j]);
			}
			printf("\n");
		}
		else 
		{
			for(int j=4-1;j>=0;j--)
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