/*WAP which accept string from user and convert it into lower case
input: Marvellous Multi OS
output:marvellous multi os
*/

#include<stdio.h>
void ConvertCase(char *str)
{
	if(str==NULL)
		return;
	while(*str!='\0')
	{
		if(*str<='Z' && *str>='A')
		{
			*str=*str+32;
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