//algoritma_no_hari
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int angka;
	string hari;
	cout<<"Bilangan= ";
	cin>>angka;
	switch(angka)
	{
		case 1: hari="Minggu";
		break;
		case 2: hari="Senin";
		break;
		case 3: hari="Selasa";
		break;
		case 4: hari="Rabu";
		break;
		case 5: hari="Kamis";
		break;
		case 6: hari="Jum'at";
		break;
		case 7: hari="Sabtu";
		break;
		default: hari="tidak ada";
	}
	cout<<"Nama hari ke-"<<angka<<" adalah= "<<hari;
	return 0;
}
