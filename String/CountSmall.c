#include<stdio.h>

int CountSmall(char *str)
{
int count=0;
	if(str==NULL)
	{
	return -1;
	}
	while(*str!='\0')
	{
		if(*str<='z' && *str>='a')
		count++;
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
	
	iRet=CountSmall(str);
	printf("Number of Small characters are:%d",iRet);
return 0;
}