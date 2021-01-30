//191125_while dari do while 4//
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	float a,t,l;
	char answer;
	
	cout<<"Apakah Anda Ingin Menghitung Luas Segitiga? (y/n) ";
	cin>>answer;
	cout<<"===================================================\n";
	
	while(answer=='y'||answer=='Y')
	{
		cout<<"Masukan Nilai Alas: ";cin>>a;
		cout<<"Masukan Nilai Tinggi: ";cin>>t;
		l=0.5*a*t;
		cout<<"Luas Segitiga= "<<l;
		cout<<"\nApakah Anda Ingin Menghitung Kembali? (Y/y) ";
		cin>>answer;
		cout<<"==============================================\n";
		cout<<endl;
	}
	return 0;
}
