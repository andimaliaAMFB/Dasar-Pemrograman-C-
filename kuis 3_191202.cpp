//kuis_3 191202//
#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int i,j,n,k,l,jumlah;
	cout<<"Angka: ";
	cin>>i;
	cout<<"Beda: ";
	cin>>j;
	cout<<"Banyaknya: ";
	cin>>n;
	cout<<"Baris Aritmatika: ";
	k=0;
	jumlah=0;
	while(k<n)
	{
		l=i+(j*k);
		cout<<l<<" ";
		jumlah=jumlah + l;
		k++;
	}
	cout<<"\nJumlah: "<<jumlah;
	return 0;
}
