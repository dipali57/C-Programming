#include<stdio.h>

int CountCapital(char *str)
{
int count=0;
	if(str==NULL)
	{
	return -1;
	}
	while(*str!='\0')
	{
		if(*str<='Z' && *str>='A')
		count++;

		//printf("%c :",*str);
		*str++;

	}
	return count;
}
int main()
{
char str[30];
int iRet=0;

	printf("Enter the String:");
	scanf("%[^'\n']s",str);
	
	iRet=CountCapital(str);
	printf("Number of capitals are:%d",iRet);
return 0;
}