#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>

using namespace std;

char teks[50];
int main(){
  //Berikut fungsi strlen();

  cout<<" FUNGSI STRLEM(); "<<endl;
  cout<<"==================="<<endl;
  cout<<" Inputkan teks bebas :";gets(teks);
  cout<<" Jumlah karakter yang diinputkan : ";
  cout<<strlen(teks);
  
  /*
  Ini adalah sebuah fungsi strlen();
  untuk menghitung jumlah karakter yang diinputkan sebelumnya
  */
  getch();
}
