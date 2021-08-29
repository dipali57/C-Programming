/*WAP which accept string from user and copy that characters of that string
into anoother string by toggling the case
input: Marvellous Multi OS
output:mARVELLOUS mULTI os
*/

#include<stdio.h>
void StrCpyToggle(char *str,char *dest)
{
	if(str==NULL || dest==NULL)
	{
		return;
	}
	while(*str!='\0')
	{
		if(*str<='z' && *str>='a')
		{
			*str=*str-32;
			*dest=*str;
		}
		else if(*str<='Z' && *str>='A') 
		{
			*str=*str+32;
			*dest=*str;
		}
		str++;
		dest++;
	}
	*dest='\0';
}
int main()
{
char arr[20];
char brr[20];
	printf("Enter the string:");
	scanf("%[^'\n']s",arr);
	StrCpyToggle(arr,brr);
	printf("Modified string is:%s",brr);
return 0;
}