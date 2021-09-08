//check given no is prime number or not 
#include<stdio.h>
int main()
{
int no=0,flag=0,i=0;
	printf("Enter number:");
	scanf("%d",&no);
		for(i=2;i<=no/2;i++)
		{
			if(no%i==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			printf("no is prime %d",no);
		}
		else
		{
			printf("no is not prime");
		}
	return 0;
}