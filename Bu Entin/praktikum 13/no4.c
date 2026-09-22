#include <stdio.h>

int cn(int n) {
    if(n == 0) return 1;
    return 2*cn(n - 1) + 1;
}

int sn(int n) {
    if(n == 1) return 0;
    return sn(n - 1) + n - 1;
}

int main(){
    int n;
    printf("Masukkan nilai n: ");
    scanf("%d", &n);
    printf("Hasil fungsi Cn = 2 Cn-1 + 1 dari n = %d adalah %d \n", n, cn(n));
    printf("Hasil fungsi Sn = Sn-1 + n - 1 dari n = %d adalah %d", n, sn(n));
}