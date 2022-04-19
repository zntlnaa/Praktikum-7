/*Nama File : BinSearch1.c*/
/*Nama-NIM : Zenit Laena Fathonah-24060121120006*/
/*Tanggal selesai : 18 April 2022*/

#include <stdio.h>
#include "BinSearch1.h"
#include <stdlib.h>

void BinSearch1(int T[], int N, int X, int *IX){
/*Mencari harga X dalam Tabel T [1...N] menggunakan binary search*/

    /*Kamus Lokal*/
    int upper, lower, mid;

    /*Algoritma*/
    upper = N-1;
    lower = 0;
    mid = (upper + lower)/ 2;

    while (X != T[mid] && lower < upper ){
        if(X > T[mid]){
            lower = mid + 1;
        }else{
            upper = mid - 1;
        }
       mid = (upper + lower)/ 2;
    }
    if (X == T[mid]){
        *IX = mid;
    }else{
        *IX = -1;
    }
}
