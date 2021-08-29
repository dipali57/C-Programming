/*WAP which accpet string from user and copy the contents 
of that strig into another string(implements strncpy() function
input: Marvellous Multi OS
output:Marvellous Multi OS
*/
#include<stdio.h>
void StrCpy(char *src,char *dest)
{
	while(*src!='\0')
	{
		*dest=*src;
		src++;
		dest++;
	}
	*dest='\0';
}
int main()
{
char arr[30]="Marvellous multi OS";
char brr[30];

StrCpy(arr,brr);

	printf("%s",brr);
return 0;
}