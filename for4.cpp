#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	for(int m=1;m<=20;m++)
	{
		if(m%2==0)
			continue;
			cout<<m<<" ";
	}
	return 0;
}
