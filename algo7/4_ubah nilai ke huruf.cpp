
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
using namespace std;

char tukar(int nilai)
{
        char in;
        if (nilai >= 85){
                in ='A';
        }else if (nilai >=70){
                in ='B';
        }else if (nilai >=60){
                in ='C';
        }else if (nilai >=50){
                in ='D';
        }else{
                in ='E';
        }

       return in;
}

int main (void)
{
        int nilai,in;
        char m;
        printf("Masukan Nilai  : ");
        scanf("%d",&nilai);
        m=tukar(nilai);
        printf("%c\n", m);
        system("pause");
        return 0;
}


