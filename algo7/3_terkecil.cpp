#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int terkecil(int a,int b,int c)
{
	int min,max;
	if (a>b){
		max=a;
		min=b;
		if (c>max){
			max=c;
			min=b;
		}
		if(c<min){
			max=a;
			min=c;
		}
	}else {
		max=b;
		min=a;
		if(c>max){
			max=c;
			min=a;
		}
		if (c<min){
			max=b;
			min=c;
		}
	}
	return min;
}
int terbesar(int a,int b,int c)
{
	int min,max;
	if (a>b){
		max=a;
		min=b;
		if (c>max){
			max=c;
			min=b;
		}
		if(c<min){
			max=a;
			min=c;
		}
	}else {
		max=b;
		min=a;
		if(c>max){
			max=c;
			min=a;
		}
		if (c<min){
			max=b;
			min=c;
		}
	}
	return max;
}


int main(void)
{
	printf("%s\n","Menampilkan nilai terkecil dari 3 nilai yang diinputkan :" );
	int a,b,c,d,e;
	printf("%s\n","masukan nilai a : " );
	scanf("%d",&a);
	printf("%s\n","masukan nilai b : " );
	scanf("%d",&b);
	printf("%s\n","masukan nilai c : " );
	scanf("%d",&c);
	printf("\n");
	d=terkecil(a,b,c);
	e=terbesar(a,b,c);
	printf("%s\n","=============================================================================================" );
	printf("%s","terkecil :" );
	printf("%d",d );
	printf("\n");
	printf("%s","terbesar :" );
	printf("%d",e );
	printf("\n");
	printf("\n");
	system("pause");
	return 0;
}