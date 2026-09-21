#include <stdio.h>

int hitung_bulan(double a, double b, int c){
    int i = 0, x = b;
    while (x < a){
        if((i%12 == 0) && (i != 0)) a += a*c/100;
        x += b;
        i++;
    }
    return i;
}

int main(){
    double a, b; 
    int c;
    printf("Masukkan berapa biaya awal : ");
    scanf("%lf", &a);
    printf("Berapa cicilan yang mampu dibayarkan tiap bulan : ");
    scanf(" %lf", &b);
    printf("Berapa rata-rata kenaikan tiap tahun (%%) : ");
    scanf(" %d", &c);
    printf("Waktu yang dibutuhkan untuk melunasi biaya haji adalah %d bulan", hitung_bulan(a, b, c));
}