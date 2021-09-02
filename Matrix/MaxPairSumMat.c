/*
Display mat:
1 2 3
4 2 6
8 2 3
Max numbers are:max1=8 max2=6:
Max two number addition is:14
*/
#include<stdio.h>

int main()
{
int temp=0;
int m,n,i,j,arr[10][10];

 	printf("enter no of rows and columns:\n");
 	scanf("%d",&m);
 	scanf("%d",&n);
 	printf("Enter elements:\n");
 	//cout<<"enter elements of matrix\n";

 	for(i=0;i<m;i++)
 	{
 		for(j=0;j<n;j++)
 		{
 			scanf("%d",&arr[i][j]);
 		}
 	}
 	printf("Display mat:\n");
 	//cout<<"Display matrix:\n";
 	for(i=0;i<m;i++)
 	{
 		for(j=0;j<n;j++)
 		{
 			printf("%d ",arr[i][j]);
 		}
 		printf("\n");
 	}

 	int max1=0,max2=0;

 	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(arr[i][j]>max1)
			{
				max2=max1;
				max1=arr[i][j];
			}

			else if(arr[i][j]>max2 && arr[i][j]<=max1)
			{
				max2=arr[i][j];
			}
		}
	}
	printf("Max numbers are:max1=%d max2=%d:",max1,max2);
	printf("Max two number addition is:%d",max1+max2);

	return 0;
}