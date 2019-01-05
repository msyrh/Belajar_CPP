#include <iostream>
#include <stdio.h>
//#include <conio.h>
#include <stdlib.h>
using namespace std;

int tambah(int a,int b)
{
	int c;
	c = a + b;
	return c ;
}
int kurang(int a,int b)
{
	int kurang;
	kurang = a - b;
	return kurang;
}
float bagi(float a,float b)
{
	float bagi;
	bagi = a / b;
	return bagi ;
}
int kali(int a,int b)
{
	int kali;
	kali = a * b;
	return kali ;
}

int main(void)
{
	int a,b,c,kur,kal;
	float bag;
	char pilih;
	printf("%s\n","==============================" );
	printf("%s\n","KALKULATOR" );
	printf("%s\n","==============================" );
	printf("%s\n","1 Jumlah" );
	printf("%s\n","2 Kurang" );
	printf("%s\n","3 Bagi" );
	printf("%s\n","4 Kali" );
	printf("%s\n","==============================" );
	printf("%s","Pilih :");
	scanf("%d",&pilih);
	switch(pilih)
	{
		case 1:
			printf("%s\n","Penjumlahan" );
			printf("Masukan Nilai a :" );
			scanf("%d",&a);
			printf("Masukan Nilai b :" );
			scanf("%d",&b);
			c=tambah(a,b);
			printf("%d\n",c );
			break;
		case 2:
			printf("%s\n","Pengurangan" );
			printf("Masukan Nilai a :" );
			scanf("%d",&a);
			printf("Masukan Nilai b :" );
			scanf("%d",&b);
			kur=kurang(a,b);
			printf("%d\n",kur);
			break;
		case 3:
			printf("%s\n","Pembagian" );
			printf("Masukan Nilai a :" );
			scanf("%d",&a);
			printf("Masukan Nilai b :" );
			scanf("%d",&b);
			bag=bagi(a,b);
			printf("%5.2f\n",bag );
			break;
		case 4:
			printf("%s\n","Perkalian" );
			printf("Masukan Nilai a :" );
			scanf("%d",&a);
			printf("Masukan Nilai b :" );
			scanf("%d",&b);
			kal=kali(a,b);
			printf("%d\n",kal );
			break;
		default:
		printf("%s\n","Anda tidak memilih dengan benar" );	
	}
	system("pause");
	return 0;
}
