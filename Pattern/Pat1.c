/*
input row=5 col=5
output	
*
* *
* * * 
* * * *
* * * * *


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
		for(i=0;i<iRow;i++)
		{
			for(j=0;j<=i;j++)
			{
				printf("* ");
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