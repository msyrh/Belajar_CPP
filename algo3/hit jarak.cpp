#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
	system("cls");
	float S,v,t,n;

	cout<<"Menghitung jarak tempuh\n";
	cout<<"Masukan waktu tempuh(detik) : ";
	cin>>n;
	t=n/3600;
	cout<<"="<<t;
	cout<<"Jam \n";
	cout<<"Masukan Kecepatan rata rata (Km/Jam): ";
	cin>>v;

	S=v*t;

	cout<<"Jadi jarak yang ditempuh selama "<<t <<" Jam atau "<<n <<" detik adalah "<<S <<" Km" <<endl;
	system("pause");
	return 0;

}