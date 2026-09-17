#include <stdio.h>

int main(){
    int a;
    printf("masukkan total harga: ");
    scanf("%d", &a);
    if(a >= 100000){
        printf("Total pembelian adalah %d", a - (a *5/100));
    } else {
        printf("Total pembelian adalah %d", a);
        }
}