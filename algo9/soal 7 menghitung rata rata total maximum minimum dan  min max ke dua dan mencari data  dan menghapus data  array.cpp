#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;

int main (){
 int i, bil[8], jumlah, tertinggi2, terendah2,tertinggi, terendah,jml=8,a[8],frek,f[8],c,hapus;
 float rata;
 char stop;

 for(i=0; i<jml; i++){
  cout<<"Masukkan data ke : "<<i+1<<" = ";
  cin>>bil[i];
 }
 cout<<"==========================================================================\n";
 cout<<"pengurutan data : ";
  for (int i=0;i<(jml-1);i++)
 	for(int j=(i+1);j<jml;j++)
 		if(bil[i]>bil[j]){
 			int tmp;
 			tmp=bil[i];
 			bil[i]=bil[j];
 			bil[j]=tmp;
 		}
 		for (int i=0;i<(jml);i++)
 		{
 			cout<<bil[i]<<' ';
 		}
 	
 
 		cout<<"\n\n"<<endl;

 jumlah=0;
 terendah=bil[0];
 terendah2=bil[1];
 tertinggi=bil[0];
 tertinggi2=bil[-1];

 for(i=0;i<jml;i++){
  	/*cout<<bil[i]<<endl;*/

  jumlah=jumlah+bil[i];
  if(bil[i]<terendah){
   	terendah=bil[i];
   	terendah2=bil[i];
  }else if(bil[i]>tertinggi){
   	tertinggi=bil[i];
   	tertinggi2=bil[i-1];
  }
 }

 rata=jumlah/jml;
 cout<<"Hasil penjumlahan seluruh elemen array : "<<jumlah<<endl;
 cout<<"Nilai maksimum seluruh elemen array : "<<tertinggi<<endl;
 cout<<"Nilai minimum seluruh elemen array : "<<terendah<<endl;
 cout<<"Nilai maksimum  2 seluruh elemen array : "<<tertinggi2 <<endl;
 cout<<"Nilai minimum 2 seluruh elemen array : "<<terendah2<<endl;
 cout<<"Nilai rata-rata seluruh elemen array : "<<rata<<endl;
 cout<<"Frekuensi nilai :\n";

 //menentukan frekuensi
 		for (int i=0;i<jml;i++){
 			frek=0;
 			for (int j=0;j<jml;j++)
 				if (bil[j]== bil[i])
 				{
 					frek++;
 					f[i]=frek;
 				}
 	}	cout<<endl;
 	//mencegah cout ama keluar
 	for (int i=0;i<jml;i++)
 	{
 		if(i>0)
 		{
 			for(int j=0;j<i;j++)
 				if (bil[i] == bil[j]&&f[i] == f[j])goto stop;
 		}
 	
 	cout<<"\t"<<bil[i]<<" = "<<f[i]<<" kali "<<endl;
 	stop:;
 }cout<<endl;
//mencari data
 cout<<"Data yang ingin dicari : ";
 cin>>c;
 for (i=0;i<jml;i++){
  if(bil[i]==c)
    cout<<"\tData "<<c<<", ditemukan pada index ke "<<i<<".\n\n";
 }
 //menghapus data
cout<<"Data yang ingin dihapus  : ";
         cin>>hapus;
              for(int i=0;i<jml;i++)
              if(hapus == bil[i]){
                for(i=0;i<jml;i++)
                {
                  if(bil[i]!=hapus){
                    cout<<bil[i]<<" ";
                  }
                }
            }
      cout<<"\n\n";


 system("pause");
 return 0;
} 