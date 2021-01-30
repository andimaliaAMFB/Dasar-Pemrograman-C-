#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	float suhu[5];
	// array dengan 5 elemen bertipe float
	// Membaca data dari keyboard dan meletakkan ke array
	cout << "Masukkan 5 buah data suhu" << endl;
	for (int i=0; i<5; i++)
	{
		cout << i + 1 << " : "; cin >> suhu[i];
	}
	
	// Menampilkan isi array ke layar
	cout << "Data suhu yang dimasukkan : " << endl;
	for (int i=0; i<5; i++)
		cout << suhu[i] << endl;
}

