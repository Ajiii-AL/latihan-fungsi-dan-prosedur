#include <stdio.h>

int Penjualan(int harga, int jumlah);

int main(){

    int a;
    int b;
    int hasil;

    printf("masukan harga makanan :");
    scanf("%d", &a);
    printf("Masukan jumlah makanan :");
    scanf("%d", &b);

    hasil = Penjualan(a, b);
    printf("Total harga makanan adalah %d", hasil);

    return 0;
}


int Penjualan(int harga, int jumlah){
    return harga * jumlah;
}
