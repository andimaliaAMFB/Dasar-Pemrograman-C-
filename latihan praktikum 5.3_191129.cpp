#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<cstring>
using namespace std;
main()
{
	char kd,ukr,merk[20];
	long int hrg,byr,ppn,ttl,u_byr,u_kembali,byk;
	cout<<"***Toko Kelontong Keroncongan***"<<endl;
	cout<<"A.Susu Dancow     "<<endl;
	cout<<"  1. Ukuran Kecil "<<endl;
	cout<<"  2. Ukuran Sedang"<<endl;
	cout<<"  3. Ukuran Besar "<<endl;
	cout<<"B. Susu Bendera     "<<endl;
	cout<<"  1. Ukuran Kecil   "<<endl;
	cout<<"  2. Ukuran Sedang  "<<endl;
	cout<<"  3. Ukuran Besar   "<<endl;
	cout<<"C.Susu SGM     "<<endl;
	cout<<"  1. Ukuran Kecil "<<endl;
	cout<<"  2. Ukuran Sedang"<<endl;
	cout<<"  3. Ukuran Besar "<<endl;
	cout<<"\nMasukan Jenis Susu    [A/B/C]:";cin>>kd;
	cout<<"\nMasukan Ukuran Kaleng [1/2/3]:";cin>>ukr;
	cout<<"\nBanyak Beli                  :"; cin>>byk;
	
	if(kd=='A'||kd=='a')
	{
		strcpy(merk,"Dancow");
		if(ukr=='1')
		{
			hrg=15000;
		}
		else if(ukr=='2')
		{
			hrg=26000;
		}
		else
		{
			hrg=45000;
		}
	}
	else if(kd=='B'||kd=='b')
	{
		strcpy(merk,"Bendera");
		if(ukr=='1')
		{
			hrg=12000;
		}
		else if(ukr=='2')
		{
			hrg=22000;
		}
		else
		{
			hrg=40000;
		}
	}
	else
	{
		strcpy(merk,"SGM");
		if(ukr=='1')
		{
			hrg=20000;
		}
		else if(ukr=='2')
		{
			hrg=38000;
		}
		else
		{
			hrg=70000;
		}	
	}
	system("cls");
	cout<<"Merk Susu   : "<<merk<<endl;
	cout<<"Harga       : Rp."<<hrg<<endl;
	byr=hrg*byk;
	cout<<"Pembayaran  : Rp."<<byr<<endl;
	ppn=0.1*byr;
	ttl=byr+ppn;
	cout<<"PPN         : Rp."<<ppn<<endl;
	cout<<"Total Bayar : Rp."<<ttl<<endl;
	cout<<"Uang Bayar  : Rp.";cin>>u_byr;
	u_kembali=u_byr-ttl;
	cout<<"Uang Kembali: Rp."<<u_kembali<<endl;
	cout<<"================================="<<endl;
	cout<<"Terimakasih Telah ke Counter Kami"<<endl;
	getch();
}
