/*WAP which accept string from user and copy the characters of that string into another string by removing all white spaces
input: Marvellous Multi OS
output:SO itluM suollevraM
*/

#include<stdio.h>
void StrCpy(char *str,char *dest)
{
	if(str==NULL || dest==NULL)
	{
		return;
	}
	while(*str!='\0')
	{
		str++;
	}
	str--;
		while(*str!='\0')
		{
		*dest=*str;
		str--;
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
	StrCpy(arr,brr);
	printf(" reverse string is:%s",brr);
return 0;
}