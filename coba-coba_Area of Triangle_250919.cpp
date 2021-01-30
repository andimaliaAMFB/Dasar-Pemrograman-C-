#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
	float a,b,c,s,area;
	cout<<"Masukan ketiga sisi segitiga:\na = ";
	cin>>a;
	cout<<"b = ";
	cin>>b;
	cout<<"c = ";
	cin>>c;
	
	s=(a+b+c)/2;
	cout<<"semiperimeter= "<<s<<endl;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	cout<<"Luas segitiga= "<<area;
	
	return 0;
	
}
