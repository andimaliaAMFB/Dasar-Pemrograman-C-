//for segitiga
#include<iostream>
#include<conio.h>
using namespace std;
main()
{
    int i,j,k=1,n;
    cout << " Masukan Lebar Segitiga Pascal: ";cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=1;j<=n-i;j++)
        cout<<"  ";
        for(j=0;j<=i;j++)
        {
            if (j==0||i==0)
            {
            	k=1;
			}
            else
            {
            	k=k*(i-j+1)/j;
			}
			cout<<k<<"   ";
        }
        cout<<endl;
    }
}

