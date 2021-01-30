//algoritma hitung_rata2
#include <iostream>
using namespace std;

int main()
{
	int n,i=0, sum=0, data[20];
	float rata2;
	cout<<"Jumlah data(maksimum 20 data)= ";
	cin>>n;
	while(i<n)
	{
		int j=i+1;
		cout<<"Memasukan data ke-"<<j<<":";
		cin>>data[i];
		sum+=data[i];
		i++;
	}
	rata2=sum/n;
	cout<<"Rata-ratanya= "<<rata2;
	return 0;
}
