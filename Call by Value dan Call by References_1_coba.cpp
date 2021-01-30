//Call by Value dan Call by References
#include<iostream>
using namespace std;

int sqr(int x)
{
	x=x*x;
	return(x);
}

int main(void)
{
	int t;
	cout<<"Masukan nilai t: ";cin>>t;
	cout<<sqr(t)<<","<<t<<endl;
	return 0;
}
