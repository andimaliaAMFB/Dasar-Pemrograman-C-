//soal 1_191227
#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int i,j,bil[10],jum,rerata;
	cout<<"Masukan 5 Buah Bilangan\n";
	for(i=0;i<5;i++)
	{
		cout<<"Bilangan ke-"<<(i+1)<<":";
		cin>>bil[i];
	}
	system("cls");
	//output
	cout<<"Bilangan yang Diinputkan: \n";
	for(j=0;j<5;j++)
	{
		cout<<bil[j]<<" ";
		jum=jum+bil[j];
	}
	rerata=(jum/(j+1));
	cout<<endl;
	cout<<"Rata-rata dari bilangan yang diinputkan adalah "<<rerata;
}
