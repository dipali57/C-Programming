/*WAP which accept string from user and copy that characters of that string
into anoother string by converting all small characters into capital case
input: Marvellous Multi OS
output:MARVELLOUS MULTI OS
*/

#include<stdio.h>
void StrCpyCap(char *str,char *dest)
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
		else 
		{
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
	StrCpyCap(arr,brr);
	printf("Modified string is:%s",brr);
return 0;
}