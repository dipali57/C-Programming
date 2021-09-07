/*
	task:
	*
	*	*
	*	*	*
	*	*	*	*
	*	*	*
	*	*
	*
*/
#include<stdio.h>
int main()
{
	int n=5;

	printf("Enter n:");
	scanf("%d",&n);
	for(int i=1;i<=n+(n-1);i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(j<=i && i+j<=(2*n))
			printf("* ");

		}
		printf("\n");
	}
	return 0;
}