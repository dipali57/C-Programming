//w a p to two matrix multplication
#include<stdio.h>
int main()
{

int mat1[10][10],mat2[10][10];

int n;

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
	printf("\nEnter elements of matrix 2:\n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&mat2[i][j]);
		}
	}

	printf("\nDisplay matrix 2:\n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d ",mat2[i][j]);
		}
		printf("\n");
	}
int mult[10][10];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			mult[i][j]=0;

			for(int k=0;k<n;k++)
			{
				mult[i][j]+=mat1[i][k]*mat2[k][j];
			}
		}
	}

	printf("\nMatrix multiplication is:\n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d ",mult[i][j]);
		}
		printf("\n");
	}
	return 0;
}


/*

C:\Users\LENOVO\Desktop\DESK\Practice>myexe
Enter n:2

Enter elements of matrix 1:
1 2
3 4

Display matrix 1:
1 2
3 4

Enter elements of matrix 2:
4 6
2 4

Display matrix 2:
4 6
2 4

Matrix multiplication is:
8 14
20 34
*/