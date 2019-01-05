#include <stdio.h>
#include <conio.h>
int a=4;
void secara_nilai(float a,float b,char c){
	float *alamat_A;
	alamat_A =&a;
	a=7;
	printf("lokal A = %f,alamat A= %p\n",a,alamat_A );
	printf("lokal B = %f\n",b );
	printf("lokal c = %c\n",c );
}

int main(){
	float a= 25, *alamat_A;
	char c='a';
	alamat_A=&a;
	secara_nilai(a,a/3,c);
	printf("Main A = %f, alamat A =%p\n",a,alamat_A );
	printf("Main A/3 = %f\n",(a/3) );
	printf("Main C =%c\n",c);

	getch();
}