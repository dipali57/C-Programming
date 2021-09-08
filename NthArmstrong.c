//Accept n and print armstrong number upto that n

#include<stdio.h>

int CountDigit(int inum)
{
	int count=0;
	while(inum!=0)
	{
		count ++;
		inum=inum/10;
	}
	return count;
}


int main()
{
int rem,sum=0,temp,t,count,backup,n;

printf("Enter n:");
scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{

		temp=i;
		backup=i;
		sum=0;
		/*while(i!=0)
		{
			count++;
			i=i/10;
		}*/
		int count=CountDigit(i);
		//printf("Total digits are:%d",count);

		while(temp!=0)
		{
			rem=temp%10;

			int result=1;
		
			//power of last digit 
			for(int j=0;j<count;j++)	
				{
					result=result*rem;		
				}

			sum=sum+result;

			temp=temp/10;
		}
		if(sum==backup)
		{
			printf("%d\t",backup);
		}
	
	}
return 0;
	
}

