// BluePineapple 
//reverse a string
#include<stdio.h>

int main(){
	
	char str[]="Blue PineApple";
	char backup[20];
	int k=0;
	while(str[k]!='\0'){
		backup[k]=str[k];
		str[k]++;
		k++;
	}
	printf("%s\n%d\n",backup,k);

	char dest[k];
	int j=0;

	for(int i=k-1;i>=0;i--){
		dest[j]=backup[i];
		j++;
	}

	dest[j]='\0';
	printf("%s",dest);
}