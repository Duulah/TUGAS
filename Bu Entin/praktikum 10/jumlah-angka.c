#include <stdio.h>

int main(){
    int a, i = 1, sum = 0;
    printf("Masukkan Bilangan: ");
    scanf("%d", &a);
    printf("Jumlah angka dari bilangan %d = ", a);
    while (i <= a) i *= 10;
    i /= 10;
    while (i > 0)
    {
        if(i == 1){
            printf("%d = ", a);
        } else {
            printf("%d + ", a/i);
        }
        sum += a/i;
        a %= i;
        i /= 10;
    }

    printf("%d", sum);
    
}