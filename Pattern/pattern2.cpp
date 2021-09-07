#include<iostream>
using namespace std;

int main()
{
	int n=0;

	cout<<"Enter num:";
	cin>>n;

	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=n;j++)
		{
			if(i==j)
			{
				cout<<j;
			}
			else
			{
				cout<<"0";
			}
		}
		cout<<endl;
	}
	return 0;
}