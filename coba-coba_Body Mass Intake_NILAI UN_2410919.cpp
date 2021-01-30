#include<iostream>
using namespace std;

int main()
{
	int mtk,indo,inggris,peminatan,Npeminatan,rerata,respon;
	do
	{
		cout<<"Masukan Nilai Matematika: ";
		cin>>mtk;
		cout<<"Masukan Nilai Bahasa Indonesia: ";
		cin>>indo;
		cout<<"Masukan Nilai Bahasa Inggris: ";
		cin>>inggris;
		
		cout<<"Pilih Mata Pelajaran:\n1.Fisika\n2.Kimia\n3.Biologi"<<endl;
		cin>>peminatan;
		
		switch(peminatan)
		{
			case 1:
			cout<<"Fisika";
			break;
			
			case 2:
			cout<<"Kimia";
			break;
			
			case 3:
			cout<<"Biologi";
			break;
		}
		cout<<endl;
		cout<<"Masukan nilai "<<": ";
		cin>>Npeminatan;
		
		rerata=(mtk+indo+inggris+Npeminatan)/4;
		cout<<"Nilai Rata-Rata UN adalah: "<<rerata<<endl;
		if(rerata<75)
		{
			cout<<"Tidak Lulus"<<endl;
		}
		else if(rerata=75)
		{
			cout<<"Cukup"<<endl;
		}
		else if(rerata>75)
		{
			cout<<"Lulus"<<endl;
		}
		cin.get();
		cout<<"Mengulang pemasukan data?"<<endl;
		cin>>respon;
	}
	while(respon);
	cout<<"TERIMAKASIH";
	return 0;
}
