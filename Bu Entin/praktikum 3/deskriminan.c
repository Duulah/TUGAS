#include <stdio.h>

int main() {
    int a, b, c;
    printf("Masukkan nilai a,b,c dengan format (a b c), pastikan ada spasi: \n");
    scanf("%d %d %d", &a, &b, &c);

    printf("Nilai deskriminan = %d", b*b - 4*a*c);

}