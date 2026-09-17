#include <stdio.h>


int main(){
    int a;
    printf("nilai_angka = ");
    scanf("%d", &a);
    if(a <= 40) printf("Nilai huruf adalah E");
    else if(a <= 55) printf("Nilai huruf adalah D");
    else if(a <= 60) printf("Nilai huruf adalah C");
    else if(a <= 80) printf("Nilai huruf adalah B");
    else if(a <= 100) printf("Nilai huruf adalah A");
    else printf("mohon masukkan input yang benar(1-100)");
}
