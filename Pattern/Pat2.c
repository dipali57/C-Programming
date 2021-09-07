/*
input row=4 col=4
output	
		*	00 01 02 03	
	  * *	10 11 12 13
	* * *   20 21 22 23
  * * * *   30 31 32 33

*/
#include<stdio.h>
void Pattern(int iRow,int iCol)
{

	int i=0,j=0;
	if(iRow!=iCol)	
	{
		printf("Row and column value must be same");
		return;
	}
	else
	{
		/*
		for(i=0;i<iRow;i++)
		{
			for(j=0;j<iCol;j++)
			{
				if(i+j>=iCol-1) 
				printf("*");
				else
				printf(" ");
			}
		printf("\n");
		}
		OR

		*/
		for(i=0;i<iRow;i++)
		{
			for(j=iCol;j>=0;j--)
			{
				if(j<=i) 
				printf("*");
				else
				printf(" ");
			}
		printf("\n");
		}
	}
	
}
int main()
{
	int iR=0,iC=0;

	printf("Enter Row:");
	scanf("%d",&iR);

	printf("Enter Col:");
	scanf("%d",&iC);

	Pattern(iR,iC);

	return 0;
}