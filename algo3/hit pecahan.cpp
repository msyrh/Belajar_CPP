#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
	system("cls");
	int a,b,c,d,h,i;

	cout<<"Menghitung Bilangan 2 Pecahan\n";
	cout<<"Masukan P1 :\n";
	cout<<"Masukan Pembilang: ";
	cin>>a;
	cout<<"\n";
	cout<<"Masukan Penyebut : ";
	cin>>b;
	cout<<"\n";

	cout<<"\t       "<<a;
	cout<<"\n\t  P1 = -\n";
	cout<<"\t       "<<b;
	cout<<"\n";

	cout<<"Masukan P2 :\n";
	cout<<"Masukan Pembilang: ";
	cin>>c;
	cout<<"\n";
	cout<<"Masukan Penyebut : ";
	cin>>d;
	cout<<"\n";

	cout<<"\t       "<<c;
	cout<<"\n\t  P2 = -\n";
	cout<<"\t       "<<d;
	cout<<"\n";

	h=a*c;
	i=b*d;

	cout<<"Hasil perkalian pecahan P1 dan P2 adalah\n";

	cout<<"\t          "<<h;
	cout<<"\n\t  P1xP2 = -\n";
	cout<<"\t          "<<i;
	cout<<"\n";
	cout<<endl;
	system("pause");
	return 0;
}