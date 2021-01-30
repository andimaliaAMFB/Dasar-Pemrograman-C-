//C++ Practice Exercise with solitions//
//%operator calciulates the integer remainder//
#include<iostream>
using namespace std;
main()
{
	int n;
	int hail;
	cin>>n;
	cout<<endl;
	
	if(n<=1)
	{
		cout<<n<<"->";
	}
	if(n%2)
	{
		hail=(3*n+1);
		cout<<hail;
	}
	else
	{
		hail=(n/2);
		cout<<hail;
	}
}
