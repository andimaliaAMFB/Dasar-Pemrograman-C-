#include <iostream>
using namespace std;

int main()
{
	int harga,diskon,total1, diskon2, totalkeseluruhan;
	harga= 20000;
	if(harga>15000)
	{
		diskon=harga*0.5;
		total1=harga-diskon;
		diskon2=total1*0.2;
		totalkeseluruhan=total1-diskon2;
	}
	cout<<"HARGA= "<<harga<<endl;
	cout<<"DISKON= "<<diskon<<endl;
	cout<<"DISKON MINGGUAN= "<<diskon2<<endl;
	cout<<"TOTAL KESELURUHAN= "<<harga<<" -"<<diskon<<" -"<<diskon2<<" ="<<totalkeseluruhan;
}
