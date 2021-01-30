#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int main()
{
	float berat;
	float tinggi;
	float tinggi2;
	float bmi;
	char response;
	
	do
	{
		cout<<"MASUKAN BERAT BADAN(KG): ";
		cin>>berat;
		cout<<"MASUKAN TINGGI BADAN(m): ";
		cin>>tinggi;
		tinggi2=tinggi*tinggi;
		bmi=berat/tinggi2;
		cout<<"\n"<<fixed<<showpoint<<setprecision(2);
		cout<<"BMI anda: "<<bmi<<endl;
		if(bmi<18.5)
		{
			cout<<"Berat badan kurang"<<endl;
		}
		else if(bmi>=18.5*bmi<=22.9)
		{
			cout<<"Berat badan normal"<<endl;
		}
		else if(bmi>23.9&&bmi<=29.9)
		{
			cout<<"Berat badan berlebih (kecenderungan obesitas)"<<endl;
		}
		else if(bmi>=30)
		{
			cout<<"ANDA obesitas"<<endl;
		}
		else
		{
			cin.get();
		}
		cin.get();
		cout<<endl;
		cout<<"MAUKAH ANDA MEMASUKAN DATA KEMBALI?"<<endl;
		cin>>response;
	}
	while(toupper(response)=='Y');
	cout<<"OKAI, TERIMAKASIH ATAS WAKTUNYA..";
	return 0;
}
