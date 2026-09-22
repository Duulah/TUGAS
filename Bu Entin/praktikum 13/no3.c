#include <stdio.h>

float kuadrat(float x) {
    return x*x;
}

int main(){
    int x;
    printf("Masukkan nilai bilangan yang ingin di cari kuadaratnya: ");
    scanf("%d", &x);
    printf("%d kuadarat (%d * %d)= %.2f", x, x, x, kuadrat(x));
}