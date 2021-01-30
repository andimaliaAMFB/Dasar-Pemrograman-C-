//Array 2D_191218_tugas 1
#include<iostream>
#include<conio.h>
using namespace std;

main()
{
	int a[2][3],b[2][3],c[2][3];//[banyak baris][banyak kolom]
	cout<<"Masukan Array A:"<<endl;
	for(int i=0;i<2;i++)//banyak baris sebanyak 2
	{
		for(int j=0;j<3;j++)//banyak kolom sebanyak 3
		{
			cin>>a[i][j];
		}
		cout<<endl;
	}
	
	cout<<"Masukan Array B:"<<endl;
	for(int i=0;i<2;i++)//banyak baris sebanyak 2
	{
		for(int j=0;j<3;j++)//banyak kolom sebanyak 3
		{
			cin>>b[i][j];
		}
		cout<<endl;
	}
	
	system("cls");
	
	cout<<"Array A:"<<endl;
	for(int i=0;i<2;i++)//banyak baris sebanyak 2
	{
		for(int j=0;j<3;j++)//banyak kolom sebanyak 3
		{
			cout<<a[i][j]<<"	";
			if(j==2)
			{
				cout<<endl;
			}
		}
		cout<<endl;
	}
	
	cout<<"Array B:"<<endl;
	for(int i=0;i<2;i++)//banyak baris sebanyak 2
	{
		for(int j=0;j<3;j++)//banyak kolom sebanyak 3
		{
			cout<<b[i][j]<<"	";
			if(j==2)
			{
				cout<<endl;
			}
		}
		cout<<endl;
	}
	cout<<"Array c =\nArray A + Array B = "<<endl;
	for(int i=0;i<2;i++)//banyak baris sebanyak 2
	{
		for(int j=0;j<3;j++)//banyak kolom sebanyak 3
		{
			c[i][j]=a[i][j]+b[i][j];
			cout<<c[i][j]<<"	";
			if(j==2)
			{
				cout<<endl;
			}
		}
		cout<<endl;
	}
	
}
