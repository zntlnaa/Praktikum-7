/*Nama File : main.c*/
/*Nama-NIM : Zenit Laena Fathonah-24060121120006*/
/*Tanggal selesai : 18 April 2022*/

#include <stdio.h>
#include <stdlib.h>
#include "BinSearch1.h"

int main()
{
    /*Kamus Global*/
    int n; /*Banyaknya data atau array*/
    int i; /*counter pertama*/
    int j; /*counter kedua*/
    int arr[100]; /*array static*/
    int p; /*peubah bantu untuk pertukaran*/
    int ix;
    int x;

 /*Algotima*/
    printf("\n=========================BINARY SEARCH=========================\n");
    printf("\nMasukkan banyaknya data : ");
    scanf("%d", &n); /*input*/

    for(i = 0; i < n; i++){
        printf("Masukkan elemen ke-%d: ", i);
        scanf("%d", &arr[i]); /*input*/
        }

    for (i = 0; i < n; i++){ /*langkah mengurutkan bilangan integer ke atas*/
        for (j = i + 1; j < n; j++){
            if (arr[i] > arr[j]){
                p = arr[i];
                arr[i] = arr[j];
                arr[j] = p;
                }
            }
        } /*nilai arr[i] dan arr[j] sudah saling dipertukarkan*/

    printf("\nData sudah terurut ke atas : ");
    for (i = 0; i < n; i++){
        printf("%d ", arr[i]); /*output*/
        }
    printf("\nMasukkan data yang ingin dicari : ");
    scanf("%d", &x);

    BinSearch1(arr, n, x,  &ix);
        if(ix == -1){
            printf("Elemen tersebut tidak ditemukan.");
        }else{
            printf("Elemen tersebut ditemukan pada indeks ke-%d ", ix);
            printf("atau pada urutan ke-%d.", ix+1);
            }
     printf("\n============================FINISHED============================\n");
    return 0;
}
