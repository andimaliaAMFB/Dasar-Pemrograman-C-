//coba faktorial
#include<iostream>
#include<conio.h>
using namespace std;


long factorial (long a)
{
	if (a>1)
		return (a* factorial (a-1));
	else
		return (1);
}

int main()
{
	long l;
	cout<<"tuliskan bilangan : ";
	cin>>l;
	cout<<"!"<<l<<" = "<<factorial(l);
	return 0;
}
