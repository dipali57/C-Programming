/*WAP which accept string from user and display only digits from that string
input:marve89llous121
output:89121
*/

#include<stdio.h>
void DisplayDigit(char *str)
{
	if(str==NULL)
		return;
	while(*str!='\0')
	{
		if(*str<='9' && *str>='0')
		{
		printf("%c",*str);
		}	
		str++;
	}
	
}
int main()
{
char arr[20];
	printf("Enter the string:");
	scanf("%[^'\n']s",arr);
	DisplayDigit(arr);

return 0;
}