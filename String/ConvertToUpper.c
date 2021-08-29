/*WAP which accept string from user and convert it into upper case
input: Marvellous Multi OS
output:MARVELLOUS MULTI OS
*/

#include<stdio.h>
void ConvertCase(char *str)
{
	if(str==NULL)
	{
		return;
	}
	while(*str!='\0')
	{
		if(*str<='z' && *str>='a')
		{
			*str=*str-32;
		}
		str++;
	}
}
int main()
{
char arr[20];
	printf("Enter the string:");
	scanf("%[^'\n']s",arr);
	ConvertCase(arr);
	printf("Modified string is:%s",arr);
return 0;
}