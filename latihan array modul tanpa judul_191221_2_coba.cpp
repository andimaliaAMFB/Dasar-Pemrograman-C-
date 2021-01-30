//latihan array modul tanpa judul_coba
#include<iostream>
#include<conio.h>
using namespace std;

main()
{
	int brs,kol,x,y,a[x][y];
	cout<<"Segitiga dalam Matriks Array"<<endl;
	cout<<"============================"<<endl;
	cout<<"Masukan banyak baris: ";cin>>x;
	cout<<"Masukan banyak kolom: ";cin>>y;
	
	brs=0;
	while(brs<x)
	{
		kol=0;
		while(kol<y)
		{
			a[brs][kol]=1+kol;
			if(kol>brs)
			{
				a[brs][kol]=0;
				
			}
			cout<<a[brs][kol];
			kol++;
		}
		cout<<endl;
		brs++;
	}
}
