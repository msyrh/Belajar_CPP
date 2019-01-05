//conntoh pengguanaan variabel lokal
#include <stdio.h>
#include <stdlib.h>

void CETAK();

int main(){
	
	CETAK();
	printf("\n");
	system("pause");
}
void CETAK(){
	int a,b,t;
	a=5;b=2;
	t=a+b;
	printf("%d",t );//terjadi error t tidak dikenal
}
