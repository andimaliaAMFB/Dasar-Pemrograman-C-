//Array(Larik)_mengurutkan data
#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
main()
{
	int i, j, tmp, jumdata;
	int data[] = {5, 100, 20, 31, 77, 88, 99, 20, 55, 1};
	jumdata = sizeof(data)/sizeof(int);
	// Menampilkan data
	cout << "Data semula: " << endl; 
	for(i=0;i<10;i++)
		cout<<data[i]<<setw(4); 
	cout<<endl;
	// Mengurutkan data 
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(data[i]<data[j])
			{
				tmp=data[i];
				data[i]=data[j];
				data[j]=tmp;
			}
		}
	}
	// Menampilkan data
	cout << "Data setelah diurutkan: " << endl;
	for (i=0;i<10;i++)
	{
		cout  << data[i]<< setw(4);
	}
	cout << endl; // Pindah baris}
}
