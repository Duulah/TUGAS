#include <stdio.h>

int main(){
    int a, b;
    printf("masukkan nilai pertama: ");
    scanf("%d", &a);
    printf("masukkan nilai kedua: ");
    scanf(" %d", &b);
    if((a%b) == 0){
        printf("Bilangan pertama adalah kelipatan persekutuan bilangan kedua");
    } else {
        printf("Bilangan pertama bukan kelipatan persekutuan bilangan kedua");
    }
}