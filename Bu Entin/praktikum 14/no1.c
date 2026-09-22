#include <stdio.h>

int ganjil(int x) {
    if(x % 2 == 0) return 0;
    else return 1;
}

int main(){
    int n;
    printf("Masukkan bilangan: ");
    scanf("%d", &n);
    int a = ganjil(n);
    if(a) printf("%d adalah bilangan ganjil", n);
    else printf("%d adalah bilangan genap", n);
}