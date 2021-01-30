//latihan 3.2_a
#include <iostream>
using namespace std;
//k = 10, c = 20, b = 1, d = 4, g = 2
int main()
{
	int k=10, g=2, b=1, c=20, d=4, p;
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
