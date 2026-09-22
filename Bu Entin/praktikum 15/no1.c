#include <stdio.h>

int max(int x, int y);

int main(){
    int x, y;
    printf("Masukkan bilangan pertama = ");
    scanf("%d", &x);
    printf("Masukkan bilangan kedua = ");
    scanf("%d", &y);
    printf("Bilangan terbesar = %d", max(x, y));
}

int max(int x, int y){
    if (x > y) return x;
    else return y;
}