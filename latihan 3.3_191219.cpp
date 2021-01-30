//latihan 3.3
#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int segi3,segip,link,p,l,a,t,r,jwb;
	float pi=3.14;
	
	cout<<"Pilih jenis Perhitungan: "<<endl;
	cout<<"1. Menghitung Luas Segitiga"<<endl;
	cout<<"2. Menghitung Luas Persegi Panjang"<<endl;
	cout<<"3. Menghitung Luas Lingkaran"<<endl;
	cin>>jwb;
	
	system("cls");
	switch(jwb)
	{
		case 1:
			cout<<"Masukan tinggi segitiga: ";cin>>t;
			cout<<"Masukan Panjang alas segitiga: ";cin>>a;
			segi3=(a*t)/2;
			cout<<"Luas Segitiga = "<<segi3<<endl;
			break;
		case 2:
			cout<<"Masukan Lebar: ";cin>>l;
			cout<<"Masukan Panjang: ";cin>>p;
			segip=p*l;
			cout<<"Luas Persegi panjang = "<<segip<<endl;
			break;
		case 3:
			cout<<"Masukan panjang jari-jari: ";cin>>r;
			link=pi*r*r;
			cout<<"Luas Lingkaran = "<<link<<endl;
			break;
	}
}
