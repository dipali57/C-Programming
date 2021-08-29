/*WAP which accpet string from user and accept one character.
return index of last occurrence of that character

input: Marvellous Multi OS
		M
output: 11
*/
#include<stdio.h>
int LastChar(char *src,char ch)
{
	int i=0;
	int iPos=-1;
	while(*src!='\0')
	{	
		if(*src==ch)
		{
			iPos=i;
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
	iRet=LastChar(arr,cVal);
	if(iRet==-1)
	printf("Character is not present");
	else
	printf("charcter index is:%d",iRet);
return 0;
}