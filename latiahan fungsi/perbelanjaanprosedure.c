#include <stdio.h>

void hitungsubtotal(int hargaBarang, int JumlahBarang, int *total);
void diskon(int subtotal, int *potongan);


int main(){
    int a;
    int b;
    int total;
    int potongan;
    int hargaSetelahDiskon;

    printf("masukan harga barang :");
    scanf("%d", &a);
    printf("Masukan jumlah barang :");
    scanf("%d", &b);

    hitungsubtotal(a, b, &total);
    diskon(total, &potongan);
    hargaSetelahDiskon = total - potongan;

    printf("Total harga barang adalah %d \n", total);
    printf("Total diskon adalah %d\n ", potongan);
    printf("Total harga barang setelah diskon adalah %d", hargaSetelahDiskon);
    
    return 0;
}

void hitungsubtotal(int hargaBarang, int JumlahBarang, int *total){
     *total = hargaBarang * JumlahBarang;
}
void diskon(int subtotal, int *potongan){
    if (subtotal >= 100000){
         *potongan = subtotal * 10 / 100;
    }else{
        *potongan = 0;
    }

}