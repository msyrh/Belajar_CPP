#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int A(int a,int b)
{
	int c;
	c=a/b;
	return c;
}
int B(int a,int b)
{
	int c;
	c=a%b;
	return c;
}

int main()
{
	int a,b;
	int bulat ,sisa;
	printf("%s","Masukan bilangan pembilang :" );
	scanf("%d",&a);
	printf("%s","Masukkan bilangan penyaebut:" );
	scanf("%d",&b);
	printf("          %d",a);
	printf("\n");
	printf("Pecahan : -" );
	printf("\n");
	printf("          %d",b);
	printf("\n");
	bulat = A(a,b);
	sisa = B(a,b);
	printf("%s\n","Hasil penyederhanaan : " );
	
	printf("           %d",sisa);
	printf("\n");
	printf("         %d",bulat);
	printf(" -" );
	printf("\n");
	printf("           %d",b);
	printf("\n");

	system("pause");
	return 0;
}