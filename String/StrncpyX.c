/*WAP which accpet string from user and copy the contents 
of that strig into another string(implements strncpy() function
input:
	Marvellous Multi OS
	10
output:Marvellous
*/
#include<stdio.h>
void StrCpyX(char *src,char *dest,int icnt)
{
	while((*src!='\0')&&(icnt!=0))
	{
		*dest=*src;
		src++;
		dest++;
		icnt--;
	}
	*dest='\0';
}
int main()
{
char arr[30]="Marvellous multi OS";
char brr[30];
StrCpyX(arr,brr,10);
	printf("%s",brr);
return 0;
}