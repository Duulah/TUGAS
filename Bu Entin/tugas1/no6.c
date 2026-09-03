#include <stdio.h>

int main(){
    int a;
    char b;
    printf("masukkan suatu bilangan: ");
    scanf("%d", &a);
    printf("masukkan sebuah karakter: ");
    scanf(" %c", &b);
    printf("nilai a = %d \n", a);
    printf("nilai b  = %c \n", b);
}