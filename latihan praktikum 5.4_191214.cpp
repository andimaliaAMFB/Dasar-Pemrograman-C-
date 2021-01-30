#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<cstring>
using namespace std;
main()
{
	char nm_pes[20],nm[20],kode, tujuan[30];
	int jml;
	long int harga, ttl;
	system("cls");
	cout<<"PT TRAVELLING INDONESIA"<<endl;
	cout<<"Nama Penumpang      : ";cin>>nm;
	cout<<"Kode Pesawat [1/2/3]: ";cin>>kode;
	cout<<"Jumlah Tiket        : ";cin>>jml;
	
	if(kode=='1')
	{
		strcpy(tujuan,"Jakarta-Medan");
		strcpy(nm_pes,"Garuda Airlines");
		harga=400000;
	}
	else if(kode=='2')
	{
		strcpy(tujuan,"Jakarta-Lampung");
		strcpy(nm_pes,"Asia Airlines");
		harga=200000;
	}
	else
	{
		strcpy(tujuan,"Jakarta-Palembang");
		strcpy(nm_pes,"Sriwijaya Airlines");
		harga=300000;
	}
	
	system("cls");
	ttl=jml*harga;
	cout<<"Penumpang Yang Bernama: "<<nm<<endl;
	cout<<"Nama Pesawat          : "<<nm_pes<<endl;
	cout<<"Tujuan                : "<<tujuan<<endl;
	cout<<"Harga Tiket           : "<<harga<<endl;
	cout<<"Total Bayar           : "<<ttl<<endl;
	getch();
}
