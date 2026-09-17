#include <stdio.h>

int x(int a, int b, int c, int d, int e){
    if((e % 12 == 0) && (e != 0)) a = a + a*c/100;
    if(d >= a) return 0;
    else {
        return 1 + x(a, b, c, d + b, e + 1);
    }
}

int main(){
    int a, b, c;
    printf("Masukkan berapa biaya awal : ");
    scanf("%d", &a);
    printf("Berapa cicilan yang mampu dibayarkan tiap bulan : ");
    scanf(" %d", &b);
    printf("Berapa rata-rata kenaikan tiap tahun (%%) : ");
    scanf(" %d", &c);
    printf("Waktu yang dibutuhkan untuk melunasi biaya haji adalah %d bulan", x(a, b, c, b, 0));
}