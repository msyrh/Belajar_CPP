
#include <iostream>
#include <stdio.h>
#include <stdlib.h>


int main()
{
	printf("%s\n","Menampilkan bilangan kelipatan 7 yang habis dibagi 2 range 1-50" );
	int i=7;
	while(i<=50){
		if(i%2==0&&i%7==0){
			printf("%d\n",i );
		}i++;
	}
	system("pause");
	return 0;
}