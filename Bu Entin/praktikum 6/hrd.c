#include <stdio.h>


int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(((a+b+c)/3) >= 75) {
        if(a > b) {
            if(a > c){
                printf("Diterima ditempatka di bagian administrasi");
            } else {
                printf("Diterima ditempatka di bagian pemasaran");
            }
        } else if(b > c) {
            printf("Diterima ditempatka di bagian produksi");
        } else {
            printf("Diterima ditempatka di bagian pemasaran");
        }
    } else {
        printf("Tidak Diterima");
    }
}
