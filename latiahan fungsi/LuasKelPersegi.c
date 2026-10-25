#include <stdio.h>

int luasPersegi(int sisi);

int kelilingPersegi(int sisi);

int main(){

    int S;
    int hasilLuas;
    int hasilKeliling;

    printf("masukan nilai sisi :");
    scanf("%d", &S);

    hasilLuas = luasPersegi(S);
    hasilKeliling = kelilingPersegi(S);

    printf("hasil luasnya adalah : %d \n", hasilLuas);
    printf("hasil keliling nya adalah : %d", hasilKeliling);

    return 0;
}

int luasPersegi(int sisi){
    return sisi * sisi;
}

int kelilingPersegi(int sisi){
    return 4 * sisi;
}