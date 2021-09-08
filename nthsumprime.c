//sum of nth prime numbers
#include<stdio.h>
int main()
{
	int num=0,i=0,j=0,sum=0;
	printf("Enter numbers:");
	scanf("%d",&num);
	for(i=2;i<=num;i++)
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
				sum=sum+i;
			}
	}

	printf("sum is:%d",sum);
	return 0;
}