#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
	char a[30];
	int b,g,gaji;
	g=5000;

	system("cls");

	cout<<"\t=====================================================================\n";
	cout<<"\tMenghitung Gaji Karyawan\n";
	cout<<"\t=====================================================================\n";
	cout<<"\tMasukan Nama Karyawan   : ";
	cin.getline(a,30);
	cout<<"\n";
	cout<<"\tMasukan Jumlah Jam Kerja: ";
	cin>>b;
	gaji=b*g;
	cout<<"\t=====================================================================\n";
	cout<<"\tNama Karyawan : "<<a <<"\n";
	cout<<"\tLama Kerja    : "<<b <<"\n";
	cout<<"\tBesaran Gaji  : Rp "<<gaji <<",00\n";
	cout<<"\t=====================================================================\n";
	system("pause");
	return 0;

}