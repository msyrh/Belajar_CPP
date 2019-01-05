#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int deret(int a,int b,int c, int n);
int main()
{
	int a=0, b, c,jumlah,n;
	printf("Menghitung jumlah deret bilangan \n");
	printf("=============================================================================================\n");
	printf("Masukkan bilangan pertama : ");
	scanf("%d",&a);
	printf("\n");
	printf("Masukkan Beda             : ");
	scanf("%d",&b);
	printf("\n");
	printf("Masukkan jumlah deret     : ");
	scanf("%d",&n);
	printf("\n");

	printf("Hasil Deret               : ");
	printf("%d",a );
	printf(",");
	jumlah=deret(a,b,c,n);
	printf("Hasil penjumlahan deret   : ");
	printf("%d\n",jumlah);
	system("pause");
	return 0;
}
int deret(int a,int b,int c, int n)
{
	int i,jumlah=0;
	jumlah=jumlah +a;
	for (i=0;i<n-1;i++){
		c=a+b;
		a=c;
		printf("%d",c );
		printf(",");
		jumlah = jumlah + c;
	}return jumlah;
}