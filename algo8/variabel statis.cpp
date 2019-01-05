#include <stdio.h>
#include <conio.h>

void coba_static(int a){
	static int b=3;
	int c=1;
	printf("b awal : %d\n",b );
	b+=a;
	printf("b akhir : %d\n",b );

	printf("c awal : %d\n",c );
	c+=a;
	printf("c akhir: %d\n",c );
}
int main(){
	int a= 2;
	coba_static(a);
	a=3;
	coba_static(a);
	getch();
}