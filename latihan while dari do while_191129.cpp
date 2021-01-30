#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int i,j,k,l,n;
	cout<<"Masukan Tinggi Segitiga: ";
	cin>>n;
	i=1;
	while(i<=n)
	{
		j=n-i;
		while(j>0)
		{
			cout<<" ";
			j--;
		}
		while(j<i)
		{
			cout<<"*";
			j++;
			
		}
		cout<<"\n";
		i++;
	}
	k=1;
	while(k<n)
	{
		l=1;
		while(l<=k)
		{
			cout<<" ";
			l++;
		}
		while(l<=n)
		{
			cout<<"*";
			l++;
		}
		cout<<"\n";
		k++;
	}
}
