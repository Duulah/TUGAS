#include <stdio.h>

int plus (int *x, int *y);

int main(){
    int x, y;
    printf("Masukkan bilangan pertama = ");
    scanf("%d", &x);
    printf("Masukkan bilangan kedua = ");
    scanf("%d", &y);
    plus(&x, &y);
    printf("Bilangan 1 = %d\nBilangan 2 = %d", x, y);
}

int plus (int *x, int *y){
    *x += 2;
    *y += 2;
}