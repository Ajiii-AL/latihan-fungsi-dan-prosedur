#include <stdio.h>

int hitungsubtotal(int hargaBarang, int JumlahBarang);
int diskon(int subtotal);

int main (){

    int a;
    int b;
    int total;
    int potongan;
    int hargaSetelahDiskon;

    printf("masukan harga barang :");
    scanf("%d", &a);
    printf("Masukan jumlah barang :");
    scanf("%d", &b);

    total = hitungsubtotal(a, b);
    potongan = diskon(total);
    hargaSetelahDiskon = total - potongan;

    printf("Total harga barang adalah %d \n", total);
    printf("Total harga barang setelah diskon adalah %d \n", hargaSetelahDiskon);
    printf("Total diskon adalah %d", potongan);

    return 0;
}

int hitungsubtotal(int hargaBarang, int JumlahBarang){

    return hargaBarang * JumlahBarang;
}

int diskon(int subtotal){
    if (subtotal >= 100000){
        return subtotal * 10 / 100;
    }else{
        return 0;
    }

}
