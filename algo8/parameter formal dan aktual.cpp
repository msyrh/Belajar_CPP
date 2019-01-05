#include <stdio.h>
#include <conio.h>
int JUMLAH(int x,int y);

int main(){
	int a,b,t;
	a=5;b=2;
	t=JUMLAH(a,b);
	printf("%d\n",t );
	getch();
}
int JUMLAH(int x,int y){
	int k;
	k=x+y;
	return(k);
	
}