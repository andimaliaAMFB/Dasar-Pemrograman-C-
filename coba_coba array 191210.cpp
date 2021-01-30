//coba_coba array 191210//
#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int harga_barang[5], jumlah_hrg;
	for(int i=0;i<5;i++)
	{
		cout<<"Harga Barang jenis "<<i+1<<": Rp.";
		cin>>harga_barang[i];
		jumlah_hrg=jumlah_hrg+harga_barang[i];
	}
	cout<<"Jumlah Harga Barang = Rp."<<jumlah_hrg;
	return 0;
}
