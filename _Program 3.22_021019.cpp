//Program 3.22
#include<iostream>
#include<conio.h>
using namespace std;
typedef unsigned char byte;
main()
{
	long int data1= 546767226531;
	int data2= 2235641;
	short int data3= 714;
	byte data4= 34;
	float data5= 1.733;//tipe data pecahan
	double data6= 4.967;//tipe data pecahan
	char data7= 'C';
	enum boolean{false,true};
	enum boolean kondisi;
	kondisi = true;
	char data8[6];
	data8[]=kondisi==1?"true":"false";
	cout<<"Nilai Long: %d\n"<<data1;
	cout<<"Nilai int:%d\n"<<data2;
	cout<<"Nilai Short: %d\n"<<data3;
	cout<<"Nilai Byte: &d\n"<<data4;
	cout<<"Nilai Double: %lf\n"<<data5;
	cout<<"Nilai Float %f\n"<<data6;
	cout<<"Nilai Char: %c\n"<<data7;
	cout<<"Nilai Boolean: %s\n"<<data8;
	getch();
	return 0;
	
}
