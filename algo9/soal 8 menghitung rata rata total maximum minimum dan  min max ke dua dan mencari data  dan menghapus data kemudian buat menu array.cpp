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
 char atas;
 atas:
 system("cls");
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
 //======================================================================================================batas 
  int pilih;
  cout<<"==============================\n" ;
  cout<<"Menu Pengolahan array \n" ;
  cout<<"==============================\n" ;
  cout<<"1  Hasil jumlah seluruh elemen\n" ;
  cout<<"2  nilai max dari seluruh elemen\n" ;
  cout<<"3  nilai min dari seluruh elemen\n" ;
  cout<<"4  Nilai max ke 2 seluruh elemen array\n" ;
  cout<<"5  Nilai min ke 2 seluruh elemen array\n" ;
  cout<<"6  Nilai rata-rata ke 2 seluruh elemen array\n" ;
  cout<<"7  frekuensi\n" ;
  cout<<"8  mencari data\n" ;
  cout<<"9  hapus data\n" ;
  cout<<"10 keluar\n" ;
  cout<<"==============================\n" ;

  cout<<"Pilih : ";
  cin>>pilih;
  switch(pilih)
  {
    case 1:
      cout<<"Hasil penjumlahan seluruh elemen array : "<<jumlah<<endl;
      getch();
      goto atas;
      break;
    case 2:
       cout<<"Nilai maksimum seluruh elemen array : "<<tertinggi<<endl;
       getch();
      goto atas;
      break;
    case 3:
       cout<<"Nilai minimum seluruh elemen array : "<<terendah<<endl;
       getch();
      goto atas;
      break;
    case 4:
       cout<<"Nilai maksimum  2 seluruh elemen array : "<<tertinggi2 <<endl;
       getch();
      goto atas;
      break;
    case 5:
       cout<<"Nilai minimum 2 seluruh elemen array : "<<terendah2<<endl;
       getch();
      goto atas;
      break;
    case 6:
      cout<<"Nilai rata-rata seluruh elemen array : "<<rata<<endl;
      getch();
      goto atas;
      break;
    case 7:
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
        } cout<<endl;
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
       getch();
      goto atas;
      break;
    case 8:
      //mencari data
         cout<<"Data yang ingin dicari : ";
         cin>>c;
         for (int i=0;i<jml;i++){
          if(bil[i]==c)
            cout<<"\tData "<<c<<", ditemukan pada index ke "<<i<<".\n\n";
         }
         getch();
      goto atas;
      break;
    case 9:
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
            getch();
      goto atas;
      
      break;
    case 10:
    cout<<"anda akan keluar";
          getch();
      
      break;
    default:
    cout<<"Anda tidak memilih dengan benar" ; 
    getch();
    
  }


 return 0;
} 