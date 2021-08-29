/*WAP which accpet string from user and accept one character.
return frequency of that charcter

input: Marvellous Multi OS
		M
output: 2
*/
#include<stdio.h>

int CountChar(char *src,char ch)
{
	int count=0;
	while(*src!='\0')
	{
		if(*src==ch)
			count++;
		src++;
	}
	return count;
}
int main()
{
char arr[30];
char cVal='\0';
int iRet=0;
	printf("Enter the string:");
	scanf("%[^'\n']s",arr);
	
	printf("Enter the character:");
	scanf(" %c",&cVal);
	
	iRet=CountChar(arr,cVal);
	
		printf("charcter frequency is:%d",iRet);
return 0;
}