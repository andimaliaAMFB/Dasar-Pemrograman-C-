//algoritma Euclid_FPB
#include <iostream>
using namespace std;

int main()
{
	int m,n,r,fpb;
	do
	{
	cout<<"Masukan bilangan pertama: ";
	cin>>m;
	cout<<"Masukan bilangan kedua: ";
	cin>>n;
	}
	while(m<n);
	r=m%n;
	if(r==0)fpb=n;
	
	else
	{
		while(r!=0)
		{
			m=n;
			n=r;
			r=m%n;
			fpb=n;
		}
	}
	cout<<"FPB-nya= "<<fpb;
	return 0;
}
