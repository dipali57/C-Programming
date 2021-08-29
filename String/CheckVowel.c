#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL CheckVowel(char *str)
{
	int ipos=0;
	while(*str!='\0')
	{
	
	if(*str=='a'||*str=='e'||*str=='o'||*str=='i'||*str=='u'||*str=='A'||*str=='E'||*str=='O'||*str=='I'||*str=='U')
	{
		ipos=1;
	}
	*str++;
	}
	return ipos;
}
int main()
{
	char arr[30];
	BOOL bRet=FALSE;
	printf("Enter the String:");
	scanf("%[^'\n']s",arr);
	
	bRet=CheckVowel(arr);
	if(bRet==TRUE)
	printf("contains vowel");
	else
	printf("There is no Vowel");
	return 0;
}