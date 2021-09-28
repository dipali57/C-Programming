/*
AMAZON
given a string S the task is to create a string with first letter of every word in the string
i/p: s="placement mock test series"
o/p: pmts

*/
#include<iostream>
#include<string.h>
using namespace std;

string DisplayChar( string str,string brr){

	int i=0;
	brr+=str[0];
	
		   //OR str[i]!='\0'
	for(i=1 ; i<str.size() ; i++)
	{

		if(str[i-1] ==' ')
		{
			
			brr+=str[i];
		}
	
	}
	return brr;
}

int main(){
string arr;
string brr;
	cout<<"Enter string:";		//hello everyone
	//cin>>arr;				//it gives only first string i.e hello
	getline(cin,arr);		//solution :  it gives whole string  i.e. hello everyone

	cout<<DisplayChar(arr,brr);
	
	return 0;


/*
OR
char name[100]={0};
cin.getline(name,100);

*/
}