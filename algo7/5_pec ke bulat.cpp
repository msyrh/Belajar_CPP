#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
float desimal(float a,float b)
{
	float c;
	c=a/b;
	return c;
}
int bulatkan(float bulat)
{
	int a,c;
	float d;
	a=bulat;
	d=(bulat - a);
	if (d >= 0.5){
		return a+1;
	}else {
		return a;
	}

}
int main()
{
	int a,b,hasil;
	float bulat;
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
	bulat = desimal(a,b);
	printf("%s","Hasil Konfersi kedalam desimal : " );
	printf("%5.2f\n",bulat );
	hasil=bulatkan(bulat);
	printf("%s","Setelah dibulatkan             :  " );
	printf("%d\n \n",hasil );

	system("pause");
	return 0;
}