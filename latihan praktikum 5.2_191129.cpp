#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
main()
{
	double tot_beli, potongan=0,jum_bayar=0;
	cout<<"Total Pembelian Rp.";cin>>tot_beli;
	if(tot_beli>=50000)
	{
		potongan=0.2*tot_beli;
		cout<<"Besarnya Potongan Rp."<<potongan<<endl;
	}
	else
	{
		potongan=0.05*tot_beli;
		cout<<"Besarnya Potongan Rp."<<potongan<<endl;
	}
	jum_bayar=tot_beli-potongan;
	cout<<"Jumlah yang harus dibayar Rp."<<jum_bayar<<endl;
	getch();
}
