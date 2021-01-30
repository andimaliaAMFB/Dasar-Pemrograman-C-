//contoh 2 array 191227
#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int i,j,bil[10];
	cout<<"Masukan 5 Buah Bilangan\n";
	for(i=0;i<5;i++)
	{
		cout<<"Bilangan ke-"<<(i+1)<<":";
		cin>>bil[i];
	}
	
	cout<<endl;
	//output
	cout<<"Bilangan yang Diinputkan: \n";
	for(j=0;j<5;j++)
	{
		cout<<bil[j]<<" ";
	}
}
