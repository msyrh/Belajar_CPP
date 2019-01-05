/*#include <stdio.h>
#include <iostream>
#include <conio.h>

int main()
 {  
    int a, b, n;
    printf("Suku pertama a     : "); 
    scanf("%d",&a);
    printf("Beda         b           : "); 
    scanf("%d",&b);
    printf("Banyaknya suku n : ");  
    scanf("%d",&n);
    int i;long u,j=0;
    printf("\nBarisan Arimatika : ");
    for (i=1;i {
         u=a+(i-1)*b;
        j+=u;
        cout<  
     }
      cout<<"\nJumlah Deret Atimatika = "<  
      getch();
}

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
using namespace std;

int deretkan(int a,int b ,int c);
int jumlah_deret(int a, int b,int c);
int main(void)
{
	int a,b,c,n;
	printf("Masukan Nilai pertama      :" );
	scanf("%d",&a);
	printf("Masukan Nilai terakhir     :" );
	scanf("%d",&b);
	printf("Masukan Nilai selisih      :" );
	scanf("%d",&c);
	printf("Deret aritmatika           :" );
	deretkan(a,b,c);
	printf("\n");
	printf("Setelah dijumlahkan        :" );
	n=jumlah_deret(a,b,c);
	printf("%d\n",n );
	printf("\n" );
	
	system("pause");
}

/*int deretkan(int a, int b,int c)
{
	int i;
	for (i=a;i<=b;i=i+c)  
		{		
 			printf("%d",i );
			if (i<b ){
				printf(" + " );
				if (i<=b && i==b){
					printf(" \n");
				}  
			} 
			
		}
	return(i);
}
int deretkan(int a, int b,int c)
{
	int i;
	
	return(i);
}

int jumlah_deret(int a, int b,int c)
{
	int d,Sn;
	d = b/c;
	Sn = 0.5 * d*(2 *c +( d -1)*c);


	return (Sn);
}*/
#include <iostream>
#include <conio.h>
 
using namespace std;
 
int main()
{
    int a=0, b, c, jumlah=0, i, n;
     
    cout<<"MENGHITUNG JUMLAH DERET BILANGAN\n";
    cout<<"----------------------------------------\n";
    cout<<"Masukkan bilangan awal             : ";
    cin>>a;
    cout<<"\nMasukkan beda                     : ";
    cin>>b;
    cout<<"\nMasukkan jumlah sampai deret ke-n : ";
    cin>>n;
     
    cout<<"Deret ke-"<<n<<" : ";
    cout<<a<<",";
    jumlah=jumlah+a; 
    for(i=0; i<n-1; i++){
             c=a+b;
             a=c;
             cout<<c<<",";
             jumlah=jumlah+c;                      
    }
     
    cout<<"\nJumlah deret ke-"<<n<<" : ";
    cout<<jumlah; 
     
    getch();
    return 0;    
}