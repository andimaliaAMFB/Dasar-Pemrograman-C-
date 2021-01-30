//Call by Value dan Call by References_coba
#include<iostream>
using namespace std;

void tukar(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}

int main(void)
{
	int i,j;
	cout<<"Mula-mula: "<<endl;
	cout<<"Nilai i (masukan): ";cin>>i;
	cout<<"Nilai j (masukan): ";cin>>j;
	tukar(&i,&j);
	cout<<endl<<"Setelah ditukar: "<<endl;
	cout<<"Nilai i  : "<<i<<endl;
	cout<<"Nilai j  : "<<j<<endl;
	return 0;
}
