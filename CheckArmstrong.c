//Check whether given number is armstrong or not

#include<stdio.h>

int main()
{
int iNo=0,end;

	printf("Enter number:\n");
	scanf("%d",&iNo);

	int count=0;
	int Backup=iNo;
	int N=iNo;
	int Rem=0,sum=0;
	//count total digits
	while(iNo!=0)
	{
		count++;
		iNo=iNo/10;
	}
	while(N!=0)
	{
		//last digit
		Rem=N%10;	
		int temp=Rem;
		int i=0,result=1;
		
		//power of last digit 
		for(i=0;i<count;i++)	
		{
			result=result*temp;		
		}
		
		//perform addition		
		sum=sum+result;	
		
		//reduce number
		N=N/10;		
	}	
	if(sum==Backup)
	{
	printf("%d is armstrong",Backup);
	}
	else
	{
		printf("%d is not armstrong",Backup);
	}
	

return 0;
}