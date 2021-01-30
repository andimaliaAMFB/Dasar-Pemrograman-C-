//for segitiga
#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int i,j,k,l,n;
	cout<<"Masukan Tinggi Piramid angka: ";cin>>n;
	
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

}
