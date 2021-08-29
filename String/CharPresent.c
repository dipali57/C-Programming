/*WAP which accpet string from user and accept one character.
 check whether the character is present in string or not
input: Marvellous Multi OS
		e
output: TRUE
*/
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL ChkChar(char *src,char ch)
{
	int ipos=0;
	while(*src!='\0')
	{
		if(*src==ch)
			ipos=1;
		src++;
	}
	return ipos;
}
int main()
{
char arr[30];
char cVal='\0';
BOOL bRet=FALSE;
	printf("Enter the string:");
	scanf("%[^'\n']s",arr);
	
	printf("Enter the character:");
	scanf(" %c",&cVal);
	
	bRet=ChkChar(arr,cVal);
	if(bRet==TRUE)
		printf("charcter found");
	else
		printf("charcter not found");
return 0;
}