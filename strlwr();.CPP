#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>

  /*
   CONTOH PROGRAM STRUPR();
   BERIUT CODE PROGRAMNYA DENGAN C++
   SEBAGAI CONTOH ANDA BISA MENGINPUTKAN KATA ATAU
   KALIMAT DENGAN HURUF BESAR
 */

 char kata[20];

 int main(){
   cout<<"          FUNGSI STRLWR();"<<endl;
   cout<<"==================================="<<endl;
   cout<<" Input kata :";gets(kata);
   cout<<" Kata "<<kata<<" diubah ke huruf kecil"<<endl;
   cout<<"==================================="<<endl;
   cout<<" Menjadi : "<<strlwr(kata);
 getch();

 /*
  Jadi program diatas merupakan fungsi dari strlwr();
  yang mana fungsinya adalah untuk mengubah huruf atau teks besar
  menjadi huruf kecil
 */
}
