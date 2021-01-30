//C++ Practice Exercise with solitions//
//Double Harmonic//
#include<iostream>
using namespace std;
int main()
{
	int n;
	int i; double res=0.0;
	cout<<"Masukan n: ";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		res+=1.0/i;
		cout<<"1/"<<i<<"= ";
		cout<<res<<endl;
	}
	return res;
}
