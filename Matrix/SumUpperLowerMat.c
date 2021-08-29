//summation of upper and lower triangle of a matrix

#include<stdio.h>
int main()
{

int mat1[10][10],mat2[10][10];

int n;
int upperSum=0,lowerSum=0;

printf("Enter n:");
scanf("%d",&n);
	printf("\nEnter elements of matrix 1:\n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&mat1[i][j]);
		}
	}

	printf("\nDisplay matrix 1:\n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d ",mat1[i][j]);
		}
		printf("\n");
	}
	printf("\n---------------\n");

	for(int i=0;i<n;i++)
	{
		for(int j=n-1;j>=i;j--)		//--- no need to use separate if function
		//for(int j=0;j<n;j++)
		{
			//if(j>=i)	
			upperSum=upperSum+mat1[i][j];
		}
	}
	printf("upper matrix sum is:%d \n",upperSum);

	for(int i=0;i<n;i++)
	{
		for(int j=0;i>=j;j++)
		{
			lowerSum=lowerSum+mat1[i][j];
		}
	}
	printf("lower matrix sum is:%d \n",lowerSum);

	return 0;
}

/*
C:\Users\LENOVO\Desktop\DESK\Practice>myexe
Enter n:3

Enter elements of matrix 1:
1 2 3
4 2 3
1 5 2

Display matrix 1:
1 2 3
4 2 3
1 5 2

---------------
upper matrix sum is:13
lower matrix sum is:15
*/