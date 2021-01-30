//for segitiga
#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int i,j,k,n;
    char alph = 'A';
    int ctr = 1;
    cout << " Masukan Tinggi Piramid Alphabet (kurang dari 26): ";cin>>n;
    for (i=1;i<=n;i++)
	{
        for (j=1;j<=n-i;j++)
		{
			cout<<"  ";
		}
        for (j=0;j<=(ctr/2);j++) 
        {
            cout<<alph++<< " ";
        }
        alph = alph - 2;
        for (j = 0; j < (ctr / 2); j++) 
        {
            cout << alph-- << " ";
        }
        ctr = ctr + 2;
        alph = 'A';
        cout << endl;
    }
}
