#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
	system("cls");
	float F,C,R;

	cout<<"Menghitung Konversi suhu dari celcius(C) ke fahrenheit(F) dan reamure(R)\n";
	cout<<"Masukan nilai suhu (C) : ";
	cin>>C;
	cout<<"\n";

	F=1.8*C+32;
	R=0.8*C;

	cout<<"Dari "<<C;
	cout<<" celcius menjadi "<<F;
	cout<<" Fahrenheit\n";

	cout<<"Dari "<<C;
	cout<<" celcius menjadi "<<R;
	cout<<" Reamure\n"<<endl;
	system("pause");
	return 0;



}