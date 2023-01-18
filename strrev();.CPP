#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>

int main(){

  char teks[50];

  cout<<" INI ADALAH FUNGSI STRREV();"<<endl;
  cout<<"============================="<<endl;
  cout<<" Input teks random : ";gets(teks);
  cout<<"============================="<<endl;
  cout<<" Teks di balikan urutannya menjadi"<<endl;
  cout<<" "<<strrev(teks);

  getch();

  /*
    Jadi ini Merupakan fungsi dari strrev(); yaitu
    digunakan untuk membalikan urutan karakter paling belakang
    ke urutan baling depan
  */
}
