//Call by Value dan Call by References
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
	int i=10,j=20;
	cout<<"Mula-mula: "<<endl;
	cout<<"Nilai i  : "<<i<<endl;
	cout<<"Nilai j  : "<<j<<endl;
	tukar(&i,&j);
	cout<<endl<<"Setelah ditukar: "<<endl;
	cout<<"Nilai i  : "<<i<<endl;
	cout<<"Nilai j  : "<<j<<endl;
	return 0;
}
