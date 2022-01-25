/* Penulis   : Fauzyah Hadirahma, email fauzyah.hadirahma@gmail.com */
/* Deskripsi : Program ini berisi contoh sederhana untuk mendefinisikan */
/* variable bertype karakter */

#include <stdio.h>
int main () {
    /* KAMUS */
    char c = 65; /* inisialisasi nilai karakter dengan 65, kode huruf 'A' */
    char c1;
    
    /* ALGORITMA */
    /* Penulisan karakter sebagai huruf */
    printf ("Karakter = %c \n", c);
    c1 = 'Z'; /* variable c1 diisi dengan huruf 'Z' */
    printf ("Karakter = %c \n", c1);
    
    /* Penulisan karakter */
    printf ("Karakter dalam kode ASCII = %d \n", c);
    printf ("Karakter sebagai huruf = %c \n", c);
    printf ("Karakter dalam kode ASCII = %d \n", c1);
    printf ("Karakter sebagai huruf = %c \n", c1);
    
    return 0;
}
