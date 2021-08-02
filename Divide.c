//program to divide two numbers

#include<stdio.h>
float Divide(int iNo1,int iNo2)
{
	float iAns=0.0;
	if(iNo2==0)		//If denominator is 0 then return -1
	{
		return -1;
	}
	iAns=iNo1/iNo2;
	return iAns;
}
int main()
{
	int iValue1=0,iValue2=0;

	float iRet=0.0;
	printf("Enter the number:");
	scanf("%d",&iValue1);
	printf("Enter the number:");
	scanf("%d",&iValue2);
	iRet=Divide(iValue1,iValue2);
	if(iRet==-1){
		printf("division is not possible");
	}
	else{
		printf("Division is:%f",iRet);
	}
	return 0;
}