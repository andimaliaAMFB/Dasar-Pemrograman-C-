//Function yang Tidak Mengembalikan Nilai
#include<iostream>
using namespace std;

fpb(int a,int b)
{
	int hasil,r=a%b;
	if(r==0)
		hasil=b;
	else
	{
		while(r!=0)
		{
			a=b;
			b=r;
			r=a%b;
			hasil=b;
		}
	}
	cout<<"FPB-nya= "<<hasil<<endl;
}

main()
{
	int m,n;
	do
	{
		cout<<"Bilangan Pertama= ";cin>>m;
		cout<<"Bilangan Kedua  = ";cin>>n;
	}while(m<n);
	fpb(m,n);
}
