//coba array_input elemen
#include<iostream>
#include<conio.h>
using namespace std;

main()
{
	int n, m, a['n']['m'];
	cout<<"Masukan batas data untuk Baris dan Kolom pada array: "<<endl;
	cout<<"Batas Baris: ";cin>>n;
	cout<<"Batas Kolom: ";cin>>m;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<"Masukan Data untuk Array ["<<i<<"]["<<j<<"]: ";cin>>a[i][j];
		}
		
	}
	
	system("cls");
	cout<<"Berikut Tabel Arraynya: "<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<a[i][j]<<" ";
			if(j==m-1)
			{
				cout<<endl;
			}
		}
		
	}
}
