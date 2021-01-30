//C++ Practice Exercise with solitions//
//Control Structures//
#include<iostream>
using namespace std;
int main()
{
	int x,y;
	cin>>x;
	cout<<endl;
	cin>>y;
	while(x!=0&&y!=0)
	{
		if(x>y)
		{
			x=x-y;
		}
		else if(x<y)
		{
			y=y-x;
		}
		else
		{
			y=0;
		}
	}
	cout<<x+y<<endl;
}
