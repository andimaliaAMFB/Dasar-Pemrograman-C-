//latihan array modul tanpa judul
#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

main()
{
	int arr[5],jum=0,rerata;
	cout<<"Masukan 5 angka: "<<endl;
	for(int i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	
	system("cls");
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<setw(4);
		jum=jum+arr[i];
	}
	rerata=jum/5;
	cout<<endl;
	cout<<"rata-rata dari data yang anda masukan adalah "<<rerata;
}
