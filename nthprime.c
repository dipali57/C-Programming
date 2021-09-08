//find prime numbers upto n numbers
#include<stdio.h>
int main()
{
int i=0,no=0,j=0;

	printf("Enter the nth value:");
	scanf("%d",&no);

	for(i=2;i<=no;i++)
	{
		int flag=0;
		int n=i/2;
		for(j=2;j<=n;j++)
		{
			if(i%j==0)
			{
				flag=1;	
				break;
			}
		}
		if(flag==0)
			{
				printf("%d\t",i);
			}
	}
	return 0;
}
