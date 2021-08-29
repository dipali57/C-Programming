/*WAP which accpet 2 string from user and concat second string after the
 first string(implements strncat() function)
input: Marvellous Infosystem
		Logic Building
output: Marvellous Infosystem Logic Building
*/
#include<stdio.h>
void StrCatx(char *src,char *dest)
{
	while(*src!='\0')
	{
		src++;		
	}
	while(*dest!='\0')
	{
		*src=*dest;
		src++;
		dest++;
	}
	*src='\0';
}
int main()
{
char arr[30]="Marvellous infosystem";
char brr[30]=" Logic Building";

StrCatx(arr,brr);
	printf("%s",arr);
	
return 0;
}