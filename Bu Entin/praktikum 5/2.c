#include <stdio.h>

int main(){
    int a;
    printf("masukkan nilai: ");
    scanf("%d", &a);
    if((a%2) == 0){
        printf("Bilangan yang anda inputkan adalah %d\nBilangan tersebut adalah bilangan genap", a);
    } else {
        printf("Bilangan yang anda inputkan adalah %d\nBilangan tersebut adalah bilangan ganjil", a);
    }
}