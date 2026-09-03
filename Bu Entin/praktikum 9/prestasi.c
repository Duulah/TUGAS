#include <stdio.h>


int main(){
    char n; 
    int h = 0, b=0;
    float a = 0;
    for (int i =0; i < 5; i++){
        printf("Masukkan nilai mapel %d:", i + 1);
        scanf(" %c", &n);
        printf("Masukkan jam mapel %d:", i + 1);
        scanf(" %d", &h);
        a += (69 - n) * h;
        b += h;
    }
    printf("Indeks Prestasi: %f", a/b);

}