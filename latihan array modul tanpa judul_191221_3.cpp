//latihan array modul tanpa judul
#include<iostream>
#include<conio.h>
using namespace std;

main()
{
	int a[10],tmp;
	cout<<"Masukan sepuluh angka: "<<endl;
	for(int i=0;i<10;i++)
	{
		cin>>a[i];
	}
	
	system("cls");
	for(int i=0;i<10;i++)
	{
		cout<<a[i]<<"  ";
	}
	cout<<endl;
	cout<<"Mengurutkan angka dari terbesar..."<<endl;
	getch();
	
	for(int i=0;i<10;i++)
	{
		for(int j=i+1;j<10;j++)
		{
			if(a[i]<a[j])
			{
				tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
			}
		}
	}
	
	for(int i=0;i<10;i++)
	{
		cout<<a[i]<<"  ";
	}
}
