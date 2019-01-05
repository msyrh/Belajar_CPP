#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	system("cls");
	int d,h,m,s,t1,t2,t3;
	cout<<"menghitung Konversi detik\n";
	cout<<"masukan jumlah detik :";
	cin>>s;

	d=s/86400;
	t1=s-(d*86400);
	h=t1/3600;
	t2=t1-(h*3600);
	m=t2/60;
	t3=t2-(m*60);
	s=t3;

	cout<<d<<" hari, "<<h <<" jam, "<<m <<" menit, "<<s <<" detik"<<endl;
	system("pause");
	return 0;
}