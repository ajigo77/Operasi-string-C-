#include <iostream.h>
#include <string.h>
#include <stdio.h>
#include <conio.h>

int main(){

  char kat1[20],kat2[20];

  cout<<" INI ADALAH FUNGSI STRCAT();"<<endl;
  cout<<" ==========================="<<endl;
  cout<<" Masukan kata ke-1\t: ";gets(kat1);
  cout<<" Masukan kata ke-2\t: ";gets(kat2);

  strcat(kat1,kat2);
  cout<<" Hasil penggabungannya  : "<<kat1;

  getch();

  /*
    Untuk menggunakan strcat();
    Perlu menyertakan file header string.h
    strcat digunakan untuk menggabungkan 2 buah string
    dengan memasukan nilai pertama yaitu kat1 yang sudah di strcat
    ke dalam cout<<"Hasil penggabungannya :"
  */
}


