#include<iostream>
#include<conio.h>
using namespace std;

const int jum_data = 5;

main()
{
	float suhu[jum_data]; // array suhu
	float total; // untuk menampung total suhu
	
	// Membaca data dari keyboard dan meletakkan ke array
	cout << "Masukkan 5 buah data suhu" << endl;
	for (int i=0; i<5; i++)
	{
		cout << i + 1 << " : "; cin >> suhu[i];
	}
	// Menghitung nilai rata-rata
	total = 0; // Mula-mula diisi dengan nol
	for(int i=0;i<5;i++)
	{
		total=total+suhu[i];
		
	}
	cout<<"Suhu rata-rata= " << total/jum_data << endl;
}
