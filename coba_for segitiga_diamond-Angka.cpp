//for segitiga
#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int i,j,k,l,n;
	cout<<"Masukan Lebar 1/2 Diamond Angka: ";cin>>n;
	
	for(i=1;i<=n;i++)
	{
		for(j=n-i;j>0;j--)
		{
			cout<<" ";
		}
		for(j=1;j<=i;j++)
		{
			cout<<j;
		}
		for(j=i-1 ;j>=1&&j<=i;j--)
		{
			cout<<j;
		}
		for(j=n-i;j>0;j--)
		{
			cout<<" ";
		}
		cout<<endl;
	}
	
	for(k=n-1;k>0;k--)
	{
		for(l=1;l<=n-k;l++)
		{
			cout<<" ";
		}
		for(l=1;l<=k;l++)
		{
			cout<<l;
		}
		for(l=k-1;l>0;l--)
		{
			cout<<l;
		}
		for(l=1;l<=n-k;l++)
		{
			cout<<" ";
		}
		cout<<endl;
	}
}
