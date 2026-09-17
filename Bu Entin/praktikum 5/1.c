#include <stdio.h>

int main(){
    int a;
    printf("masukkan nilai: ");
    scanf("%d", &a);
    if(a < 0){
        printf("Nilai %d negatif", a);
    } else {
        printf("Nilai %d positif", a);
    }
}