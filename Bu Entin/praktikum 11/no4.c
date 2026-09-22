#include <stdio.h>

int main(){
    int n, i, sum = 0, max, min, a;
    printf("Masukkan n: ");
    scanf("%d", &n);
    printf("Masukkan nilai ke 1-%d: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a);
        sum += a;
        if(i == 0) {
            max = a;
            min = a;
        }
        if(a > max) max = a;
        if(a < min) min = a;
    }
    printf("Minimum = %d \n", min);
    printf("Maksimum = %d \n", max);
    printf("Rata-rata = %.2f \n", 1.0*sum/i);
}