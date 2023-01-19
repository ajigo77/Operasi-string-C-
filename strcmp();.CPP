#include <iostream.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(){

  char kata1[50],kata2[50],banding,a;
  
naik:
  cout<<" FUNGSI STRCMP PERBANDINGAN STRING"<<endl;
  cout<<" ================================="<<endl;
  cout<<" Masukan kalimat ke-1 :";gets(kata1);
  cout<<" Masukan kalimat ke-2 :";gets(kata2);

  cout<<" Hasilnya = ";
  banding=strcmp(kata1,kata2);
  if(banding==0){
    cout<<" Kata 1 dan 2 sama"<<endl;
  }else{
     cout<<" Kata 1 dan 2 berbeda"<<endl;
  }
cout<<" Masukan lagi[Y/N] :";
cin>>a;
system("cls") ;
 if(a=='y'||a=='Y') {
   goto naik;
}else{
  cout<<"<--Program logout-->";
}


/*
  KESIMPULANNYA:

  strcmp ini digunakan untuk membandingkan 2 buah string dimana
  hasil akhirnya akan berupa bilangan integer atau berupa angka,
  jadi ketika hasil perbandingannya menghasilkan angka 0,
  maka kedua buah nilai string tersebut nilai yang diinputkannya sama,
  sebaliknya jika menghasilkan angka yang berbeda,
  maka nilai yang diinputkannya berbeda.

  Pokoknya kalau menghasilkan angka 0 nilai stringnya SAMA
  Kalau menghasilkan angka yang beda misalkan 32 & -32 nilai string
  nya pun BERBEDA.

  ngerti kann??
  Okee...ngerti lah yaa...
*/

  getch();
}
