//latihan 3.2_b
#include <iostream>
using namespace std;
//k = 7, c = 4, b = 4, d = 12, g = 2
int main()
{
	int k=7, g=2, b=4, c=4, d=12, p;
	if(k > 9)
	{
		if(c <= 4)
		b = b + 4;
		else
		{
			cout << "BANDUNG" << endl; b = b - 2;
		}
	}
	else {
		if(g != 4)
		{
			cout << "JAKARTA" << endl; d = d / 4;
		}
		else
			d = d % 4;
	}
	p = d + b; cout << p;
}
