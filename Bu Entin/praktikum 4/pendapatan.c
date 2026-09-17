#include <stdio.h>


int main(){
    float a;
    int x, y;
    printf("Gaji Pokok per bulan: ");
    scanf("%f", &a);
    printf("Jumlah anak =");
    scanf(" %d", &x);
    printf("Jumlah hari masuk kerja =");
    scanf(" %d", &y);
    a += a*10/100 + a*5/100*x;
    a -= a*15/100;
    a += 5000/12.0;
    a += 3000*y;
    a -= 20000;
    printf("Jumlah Pendapatan per Bulan = Rp %.2f", a);
}
