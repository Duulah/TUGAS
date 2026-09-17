#include <stdio.h>

int main(){
    int a;
    float b;
    printf("masukkan bilangan pertama: ");
    scanf("%d", &a);
    printf("masukkan bilangan kedua (pembagi): ");
    scanf(" %f", &b);
    if(b == 0){
        printf("error: division by zero");
    } else {
        printf("hasil bagi %d dengan %f adalah: %.3f", a, b, a/b);
    }
}