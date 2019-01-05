#include <iostream>
#include <stdio.h>
#include <stdlib.h>


int main()

{
	printf("%s\n","Menampilkan nilai terkecil dari beberapa inputan:" );
	int a,b,c,min,max;
	printf("%s\n","masukan Bilangan a: " );
	scanf("%d",&a);
	printf("%s\n","masukan Bilangan b: " );
	scanf("%d",&b);
	printf("%s\n","masukan Bilangan c: " );
	scanf("%d",&c);
	printf("\n");
	if (a>b){
		max=a;
		min=b;
		if (c>max)
		{
			max=c;
			min=b;
		}
		if (c<min)
		{
			max=a;
			min=c;
		}
	}else{
		max=b;
		min=a;
		if(c>max){
			max=c;
			min=a;
		}if (c<min){
			max=b;
			min=c;
		}
	}
	printf("Nilai minimumnya adalah %d\n",min);
	system("pause");
	return 0;
}