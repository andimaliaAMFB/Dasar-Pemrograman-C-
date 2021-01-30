//coba_coba array 2 191210//
#include<iostream>
using namespace std;
main()
{
	char nama_barang[5][20];
	for(int i=0;i<5;i++)
	{
		cout<<"Nama Jenis Barang "<<i+1<<": ";
		cin>>nama_barang[i];
	}
	return 0;
}
