//segitiga for_191206//
#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int n;
	cout<<"Masukan tinggi segitiga: ";
	cin>>n;
	
	for(int i=1;i<=n;i++)
	{
		for(int k=n-i;k>=1;k--)
		{
			cout<<" ";
		}
		for(int j=1;j<=((i*2)-1);j++)
		{
			cout<<"*";
		}
		cout<<" "<<endl;
	}
	return 0;
}
