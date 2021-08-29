#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL StrCmpX(char *src,char *dest)
{
	while(*src!='\0' && *dest!='\0')
	{
		src++;
		dest++;
	}
	if(*src==*dest || *dest==*src)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}
int main()
{
	char arr[30]="Marvellous Infosystem";
	char brr[50]="Marvellous Infosystem";
	BOOL bRet=FALSE;
	bRet=StrCmpX(arr,brr);
	if(bRet==TRUE)
	{
		printf("Both are equal");
	}
	else
	{
		printf("NOT EQUAL");
	}
	return 0;
}