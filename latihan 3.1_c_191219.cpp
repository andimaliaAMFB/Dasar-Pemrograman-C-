//latihan 3.2_c
#include <iostream>
using namespace std;
//k = 11, c = 1, b = -2, d = -2, g = 2
int main()
{
	int k=11, g=2, b=-2, c=1, d=-2, p;
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
