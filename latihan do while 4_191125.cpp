//191125_do while 4//
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	float a,t,l;
	char answer;//a=alas, t= tinggi,l=luas, an=jawaban//
	//luas segitiga= 1/2 alas* tinggi di dalam do//;
	do
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
	while(answer=='Y'||answer=='y');
	return 0;
}
