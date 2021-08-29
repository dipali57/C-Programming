#include<stdio.h>

int Difference(char *str)
{
int Ccnt=0,Scnt=0;
	if(str==NULL)
	{
	return -1;
	}
	while(*str!='\0')
	{
		if(*str<='Z' && *str>='A')
		Ccnt++;
		if(*str<='z' && *str>='a')
		Scnt++;
	
		*str++;
	}
	return Scnt-Ccnt;
}
int main()
{
char str[30];
int iRet=0;

	printf("Enter the String:");
	scanf("%[^'\n']s",str);
	
	iRet=Difference(str);
	printf("Differnce is:%d",iRet);
return 0;
}