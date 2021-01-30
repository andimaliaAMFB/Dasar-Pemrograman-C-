//latihan array modul tanpa judul
#include<iostream>
#include<conio.h>
using namespace std;

main()
{
	int brs=0,kol,a[4][4];
	while(brs<4)
	{
		kol=0;
		while(kol<4)
		{
			a[brs][kol]=1+kol;
			if(kol>brs)
			{
				a[brs][kol]=0;
				
			}
			cout<<a[brs][kol];
			kol++;
		}
		cout<<endl;
		brs++;
	}
}
