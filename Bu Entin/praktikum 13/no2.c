#include <stdio.h>

int triangular(int n) {
    int a = 0;
    for (int i = n; i >= 1; i--){
        if(i>1) printf("%d + ", i);
        a += i;
    }
    printf("1 = %d", a);
}

int main(){
    int n;
    printf("Masukkan nilai n: ");
    scanf("%d", &n);
    triangular(n);
}