//kuis_2 191202//
#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int i,j,n;
	cout<<"Masukan banyak angka ganjil maksimal: ";
	cin>>n;
	i=1;
	while(i<=n)
	{
		j=1;
		while(j<=i)
		{
			cout<<j<<" ";
			j+=2;
		}
		cout<<endl;
		i+=2;
	}
	return 0;
}
