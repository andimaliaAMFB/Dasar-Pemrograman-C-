//Contoh 14_Manipulator setw
//*------------------------------------------------------------------*
//* Contoh 14 : Menampilkan 3 jumlah barang dgn *
//* menggunakan manipulator setw() *
//*------------------------------------------------------------------*
#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
main()
{
int jumbar1 = 150;
int jumbar2 = 23;
int jumbar3 = 1401;
system("cls"); // Hapus layar
cout << "Barang 1 = " << setw(4) <<jumbar1 << endl;
cout << "Barang 2 = " << setw(4) <<jumbar2 << endl;
cout << "Barang 3 = " << setw(4) <<jumbar3 << endl;
return 0; }
