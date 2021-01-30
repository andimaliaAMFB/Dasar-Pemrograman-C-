//soal 2_191227
#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int i,j,bil[10],jum,rerata,tmp;
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
	
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(bil[j]<bil[i])
			{
				tmp=bil[j];
				bil[j]=bil[i];
				bil[i]=tmp;
			}
		}
	}
	cout<<endl;
	cout<<"Data input yang terbesar adalah "<<bil[0];
	
	cout<<endl;
	cout<<"Data input yang terkecil adalah "<<bil[4];
}
