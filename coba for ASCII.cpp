//Coba_ASCII
#include<iostream>
using namespace std;
main()
{
	int i,a,A;
	cout<<"Masukan Angka Awal untuk bilangan ASCII: ";cin>>a;
	cout<<"Masukan Angka Akhir untuk bilangan ASCII: ";cin>>A;
	cout<<"ASCII --> Terjemahan"<<endl;
	for(i=a;i<=A;i++)
	{
		cout<<i<<"    -->      "<<char(i)<<endl;
	}
}
