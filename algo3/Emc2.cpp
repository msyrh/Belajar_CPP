#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
	system("cls");
	float E,m,c;//(c=89.88 PJ/Kg)

	cout<<"Menghitung dengan rumus E=mc2 (Energi)\n";
	cout<<"masukan nilai m(massa): ";
	cin>>m;
	cout<<"\n";
	cout<<"masukan nilai c(kecepatan cahaya): ";
	cin>>c;
	cout<<"\n";

	E=m*c*c;

	cout<<"Hasil perhitungan rumus E=mc2 adalah "<<E <<endl;
	system("pause");
	return 0;
}