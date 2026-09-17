#include <stdio.h>

int main() {
    float a, b, c;
    printf("Masukkan nilai a,b,c dengan format (a b c), pastikan ada spasi: \n");
    scanf("%f %f %f", &a, &b, &c);

    printf("Nilai deskriminan = %f", b*b - 4*a*c);

}