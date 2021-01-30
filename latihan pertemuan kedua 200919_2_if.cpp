#include <iostream>
using namespace std;

int main()
{
	int sales,bonus,salary;
	sales=80000;
	if(sales>50000)
	{
		bonus=sales*0.5;
		salary=sales+bonus;
	}
	cout<<"SALES ="<<sales<<endl;
	cout<<"BONUS ="<<bonus<<endl;
	cout<<"SALARY = SALES + BONUS ="<<sales<<" +"<<bonus<<" ="<<salary;
}
