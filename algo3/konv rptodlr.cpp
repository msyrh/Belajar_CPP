#include <iostream>
#include <stdlib.h>
#define tukar 15000

using namespace std;

int main()
{
	system("cls");
	float Rp,D,r;
	cout<<"Menghitung nilai tukar rupiah ke dollar ( $1,00=Rp 15000,00)\n";
	cout<<"Masukan Jumlah uang (rupiah): ";
	cin>>Rp;

	D=Rp/tukar;

	cout<<"Hasil nilai tukar ke Dollar AS menjadi $ "<<D <<",00\n\n";
	system("pause");
	return 0; 
}