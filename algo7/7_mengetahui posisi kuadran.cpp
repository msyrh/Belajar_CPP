#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int dikuadran(int x,int y)
{
	if (x>0 && y>0){
		printf("%s\n","Kuadran 1" );
	}else if(x<0 && y>0){
		printf("%s\n","Kuadran 2" );
	}else if(x<0 && y<0){
		printf("%s\n","Kuadran 3" );
	}else if(x>0 && y<0){
		printf("%s\n","Kuadran 4" );
	}
	
}


int main(void)
{
	printf("%s\n","Menampilkan nilai terkecil dari 3 nilai yang diinputkan :" );
	int x,y;
	printf("%s","masukan koordinat x: " );
	scanf("%d",&x);
	printf("%s","masukan koordinat y: " );
	scanf("%d",&y);
	printf("%s","koordinat          : " );
	printf("(");
	printf("%d",x );
	printf("%s"," , " );
	printf("%d",y );
	printf(")\n");
	printf("\n");
	dikuadran(x,y);
	printf("\n");
	system("pause");
	return 0;
}