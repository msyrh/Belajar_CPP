#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
 int main()
 {
 	int a,b,c,f=0;
 	printf("%s\n","masukan bilangan ke satu : " );
 	scanf("%d",&a);
 	printf("%s\n","masukan bilangan ke 2 : " );
 	scanf("%d",&b);
 	for (c=1;c<=b;c++){
 		f=f+a;
 	}
 	printf("%s","Hasil Pekalian ");
 	printf("%d",a );
 	printf("%s"," dan ");
 	printf("%d",b);
 	printf("%s"," adalah ");
 	printf("%d\n",f );
 	system("pause");
 	return 0;
 }