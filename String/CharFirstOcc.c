/*WAP which accpet string from user and accept one character.
return index of first occurrence of that character

input: Marvellous Multi OS
		M
output: 0
*/
#include<stdio.h>

int FisrtChar(char *src,char ch)
{
	int i=0;
	int iPos=-1;
	while(*src!='\0')
	{
		if(*src==ch)
		{
			iPos=i;
			break;
		}
		src++;
		i++;
	}
	return iPos;
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
	
	iRet=FisrtChar(arr,cVal);
	if(iRet==-1)
		printf("character is not present");
	else
	printf("charcter index is:%d",iRet);
return 0;
}