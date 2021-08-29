/*Spirally traverse
	
	left=0			right=col-1=3			
top	 1 -> 2 -> 3 -> 4 			
 0		  	        |
	 5 -> 6 -> 7    8
	 |	       |    |
	 9    10<- 11   12
	 |			    |
	13 <-14 <-15 <- 16
bottom
 row-1=3

		left   ->right  = 1 2 3 4 	    top++   	top=1
		top    ->bottom = 8 12 16		right--		right=2
		right  ->left   = 15 14 13      bottom--  	bottom=2
		bottom ->top    = 9 5 			left++  	left=1


o/p:-  1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10
*/

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

printf("\n-------------------\n");
int top=0,bottom=row-1;
int left=0,right=col-1;

	while(top<=bottom && left<=right)
	{
		for(int i=left ; i<=right ;	i++)
		{
			printf("%d ",matrix[top][i]);
		}
		top++;
		
		for(int i=top ; i<=bottom ; i++)
		{
			printf("%d ",matrix[i][right]);
		}
		right--;

		if(top<=bottom){

			for(int i=right; i>=left ; i--)
			{
				printf("%d ",matrix[bottom][i]);
			}
		bottom--;
		}
	
		if(left<=right){
			for(int i=bottom; i>=top ;i--)
			{
				printf("%d ",matrix[i][left]);
			}
		left++;
		}
	
	}

return 0;

}
/*
	when we select only one row then if condition is works.
*/