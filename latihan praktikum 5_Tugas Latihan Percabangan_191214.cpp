#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<cstring>
using namespace std;
main()
{
	char nama[20];
	float match_1,match_2,match_3,rerata;
	
	cout<<"Nama Siswa: ";cin>>nama;
	cout<<"Nilai Pertandinagn 1: ";cin>>match_1;
	cout<<"Nilai Pertandinagn 2: ";cin>>match_2;
	cout<<"Nilai Pertandinagn 3: ";cin>>match_3;
	rerata=(match_1+match_2+match_3)/3;
	
	if(rerata>=85&&rerata<=100)
	{
		system("cls");
		cout<<"Siswa yang bernama        : "<<nama<<endl;
		cout<<"Memperoleh nilai rata-rata: "<<rerata<<" dari hasil perlombaan yang diikutinya"<<endl;
		cout<<"Hadiah yang didapat adalah: Seperangkat Komputer P4";
	}
	else if(rerata>=70&&rerata<84)
	{
		system("cls");
		cout<<"Siswa yang bernama        : "<<nama<<endl;
		cout<<"Memperoleh nilai rata-rata: "<<rerata<<" dari hasil perlombaan yang diikutinya"<<endl;
		cout<<"Hadiah yang didapat adalah: Uang Sebesar Rp.500.000";
	}
	else if(rerata<70&&rerata>=0)
	{
		system("cls");
		cout<<"Siswa yang bernama        : "<<nama<<endl;
		cout<<"Memperoleh nilai rata-rata: "<<rerata<<" dari hasil perlombaan yang diikutinya"<<endl;
		cout<<"Hadiah yang didapat adalah: Hiburan";
	}
	
	
}
