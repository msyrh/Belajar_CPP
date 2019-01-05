//conntoh pengguanaan variabel lokal
#include <stdio.h>
void CETAK();

int main(){
	int a,b,t;
	a=5;b=2;
	t=a+b;
	CETAK();
}
void CETAK(){
	printf("%d",t );//terjadi error t tidak dikenal
}