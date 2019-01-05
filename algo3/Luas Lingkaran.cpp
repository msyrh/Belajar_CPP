#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	system("cls");
	float L,r;

	cout<<"Menghitung Luas Lingkaran\n";
	cout<<"masukan jari jari : ";
	cin>>r;
	cout<<"\n";

	L=3.14*r*r;

	cout<<"Luas Lingkaran adalah "<<L <<endl;
	system("pause");
	return 0;
}