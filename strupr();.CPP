#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>

  /*
   CONTOH PROGRAM STRUPR();
   BERIUT CODE PROGRAMNYA DENGAN C++
   SEBAGAI CONTOH ANDA BISA MENGINPUTKAN KATA ATAU
   KALIMAT DENGAN HURUF KECIL
 */

 char kata[20];

 int main(){
   cout<<"          FUNGSI STRUPR();"<<endl;
   cout<<"==================================="<<endl;
   cout<<" Input kata :";gets(kata);
   cout<<" Kata "<<kata<<" diubah ke huruf besar"<<endl;
   cout<<"==================================="<<endl;
   cout<<" Menjadi : "<<strupr(kata);
 getch();

 /*
  Jadi program diatas merupakan fungsi dari strupr();
  yang mana fungsinya adalah untuk mengubah huruf atau teks kecil
  menjadi huruf kapital atau huruf besar
 */
}
