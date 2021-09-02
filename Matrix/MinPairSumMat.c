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

 	int min1=arr[0][0],min2=arr[0][1];

 	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(arr[i][j]<min1)
			{
				min2=min1;
				min1=arr[i][j];
			}

			else if(arr[i][j]<min2 && arr[i][j]>=min1)
			{
				min2=arr[i][j];
			}
		}
	}
	printf("min numbers are:min1=%d min2=%d:",min1,min2);
	printf("min two number addition is:%d",min1+min2);

	return 0;
}