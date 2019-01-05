#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int ulang(int n);

int main(void)
{
	int n;
	printf("Masukan Nilai n :" );
	scanf("%d",&n);
	ulang(n);
	system("pause");
}

int ulang(int n)
{
	int i;
	for (i=1;i<=n;i++)
		printf("%s\n","Algoritma dan Pemrograman\n" );
	return(i);
}