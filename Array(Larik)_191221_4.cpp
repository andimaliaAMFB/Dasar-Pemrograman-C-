#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

const int BARIS = 5;
const int KOLOM = 5;
void isi_matriks(float mat[][KOLOM], int &brs, int &kol);

main()
{
	float matriks[BARIS][KOLOM];
	int jum_baris, jum_kolom;
	int i,j;
	isi_matriks(matriks, jum_baris, jum_kolom);
}

// Definisi Fungsi 
void isi_matriks(float mat[][KOLOM], int &brs, int &kol) 
{ 
	int i,j; cout << "Pastikan jumlah baris dan kolom" << endl; 
	cout << "tidak melebihi 5" << endl; 
	cout << "Jumlah baris = ";
	cin >> brs;
	cout << "Jumlah kolom = "; cin >> kol;
	for (i=0; i< brs; i++)
	{
		for (j=0;j<kol;j++)
		{
			cout<<"Elemen " << i << ", " << j << " = "; cin >> mat[i][j];	
		}
	} 
	
	cout << "\nMatriks yang terbentuk: " << endl; 
	cout << setiosflags(ios::fixed); 
	// ios::fixed --> mengatur angka yg dimasukkan dalam bentuk angka biasa// bukan dalam bentuk eksponen
	for (i=0; i< brs; i++)
	{
		for (j=0;j<kol;j++)
		{
			cout<<setw(12) << setprecision(5) << mat[i][j];	
			// setprecision(5) --> mengatur banyak angka dibelakang komacout << endl;
			if(j==kol-1)
			{
				cout<<endl;
			}
		}
	} 
}

