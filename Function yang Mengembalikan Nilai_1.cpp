//Function yang Mengembalikan Nilai
#include<iostream>
using namespace std;

int fpb(int a, int b)
{
	int hasil;
	int r = a % b;
	if (r==0)
		hasil = b;
	else
	{
		while(r!=0)
		{
			a = b; b = r;
			r = a % b;
			hasil = b;
		}
	}
	return(hasil);
}

main()
{
	int m,n;
	do
	{
		cout << "Bilangan pertama = ";
		cin >> m;
		cout << "Bilangan kedua = ";
		cin >> n;
	}
	while (m < n);
	cout << "FPB-nya = " << fpb(m,n)<<endl;
}
