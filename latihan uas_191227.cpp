#include<iostream>
#include<conio.h>
#include<iomanip>
#include<stdio.h>
using namespace std;
main()
{
	int n=0,rangking['n'],tmp;
	float mandiri['n'],uts['n'], uas['n'],akhir['n'],rata['n'],jum['n'],max['n'],min['n'];
	char nama[100]['n'],jwb;
	
	cout<<"Masukan banyak data yang akan dimasukan: ";cin>>n;
	
	for(int i=0;i<n;i++)
	{
		cout<<"Data ke-"<<i+1<<endl;
		cout<<"Nama (maks. 20 karakter)):";cin>>nama[i];
		cout<<"Tugas Mandiri:            ";cin>>mandiri[i];
		cout<<"UTS:                      ";cin>>uts[i];
		cout<<"UAS:                      ";cin>>uas[i];
		cout<<"=========================="<<endl;
		
		//mencari nilai terbesar dan terkecil
		if(mandiri[i]>uts[i]&&mandiri[i]>uas[i])
		{
			if(uts[i]>uas[i])
			{
				max[i]=mandiri[i];
				min[i]=uas[i];
			}
			else if(uas[i]>uts[i])
			{
				max[i]=mandiri[i];
				min[i]=uts[i];
			}
		}
		else if (uts[i]>mandiri[i]&&uts[i]>uas[i])
		{
			if(mandiri[i]>uas[i])
			{
				max[i]=uts[i];
				min[i]=uas[i];
			}
			else if(uas[i]>mandiri[i])
			{
				max[i]=uts[i];
				min[i]=mandiri[i];
			}
		}
		else if(uas[i]>mandiri[i]&&uas[i]>uts[i])
		{
			if(uts[i]>mandiri[i])
			{
				max[i]=uas[i];
				min[i]=mandiri[i];
			}
			else if(mandiri[i]>uts[i])
			{
				max[i]=uas[i];
				min[i]=uts[i];
			}
		}
		
		jum[i]=jum[i]+mandiri[i]+uts[i]+uas[i];
		rata[i]=jum[i]/3;
		
	} 
	getch();
	system("cls");
	
	int tabel['n'][10];
	
	cout<<"No||"<<"	 Nama	 ||"<<" Tugas Mandiri ||"<<" UTS ||"<<" UAS ||"<<" Rata-rata ||";
	cout<<" Nilai Terbesar ||"<<" Nilai Terkecil ||"<<" Kriteria ||"<<" Rangking ||"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<setiosflags(ios::left)<<setw(2)<<i+1;
		cout<<"||"<<setiosflags(ios::left)<<setw(10)<<nama[i];
		cout<<"||"<<setiosflags(ios::left)<<setw(7)<<mandiri[i];
		cout<<"||"<<setiosflags(ios::left)<<setw(5)<<uts[i];
		cout<<"||"<<setiosflags(ios::left)<<setw(5)<<uas[i];
		cout<<"||"<<setiosflags(ios::left)<<setw(5)<<rata[i];
		cout<<"||"<<setiosflags(ios::left)<<setw(8)<<max[i];
		cout<<"||"<<setiosflags(ios::left)<<setw(8)<<min[i];
		cout<<"||"<<setiosflags(ios::left)<<setw(5);
		if(rata[i]>=90&&rata[i]<=100)
		{
			cout<<"A";
		}
		else if(rata[i]>=80&&rata[i]<90)
		{
			cout<<"B";
		}
		else if(rata[i]>=70&&rata[i]<80)
		{
			cout<<"C";
		}
		else if(rata[i]>=60&&rata[i]<70)
		{
			cout<<"D";
		}
		else if(rata[i]>=0&&rata[i]<60)
		{
			cout<<"E";
		}
		//rangking
		rangking[i]=1;
		for(int j=0;j<n;j++)
		{
			if(rata[i]<rata[j])
			{
				rangking[i]++;	
			}
		}
		cout<<"||"<<setiosflags(ios::left)<<setw(5)<<rangking[i]<<"||";
		cout<<endl;
	}
}
