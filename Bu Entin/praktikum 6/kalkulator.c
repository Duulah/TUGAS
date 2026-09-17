#include <stdio.h>


int main(){
    int a, b, c, d;
    printf("Masukkan bilangan pertama : ");
    scanf("%d", &a);
    printf("Masukkan bilangan kedua : ");
    scanf(" %d", &b);
    printf("Menu Matematika\n1. Penjumlahan\n2. Pengurangan\n3. Pembagian\n4. Perkalian\nMasukkan pilihan anda :");
    scanf(" %d", &c);
    if(c ==1){
        d = a + b;
    } else if(c ==2){
        d = a - b;
    } else if(c ==3){
        d = a * b;
    } else if(c==4){
        d = a / b;
    } else {
        printf("Untuk operasi hanya masukkan 1/2/3/4");
        return 0;

    }
    printf("Hasil operasi tersebut = %d", d);
}
