/*WAP which accept string from user and count the number of white spaces
input: Marvellous Multi OS
output:2
*/

#include<stdio.h>
int CountWhite(char *str)
{
int count=0;
	if(str==NULL)
		return 0;
	while(*str!='\0')
	{
		if(*str==' ')
		{
			count++;
		}
		str++;
	}
	return count;
}
int main()
{
char arr[20];
int iRet=0;
	printf("Enter the string:");
	scanf("%[^'\n']s",arr);
	iRet=CountWhite(arr);
	printf("number of white spaces are:%d",iRet);
return 0;
}