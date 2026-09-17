#include <stdio.h>

int main(){
    int a = 0, i = 0, max, min;
    char x = 'y';
    do
    {
        int b = 0;
        i++;        
        printf("Masukkan bilangan ke %d: ", i);
        scanf("%d", &b);
        if(i == 1) {
            max = b;
            min = b;
        }
        if(b > max) max = b;
        if(b < min) min = b;
        a += b;
        do {
            if(x != 'y' && x != 't') printf("\n\n\n\nError, masukkan yang anda berikan tidak valid\n");
            printf("Mau masukkan data lagi [y/t]? ");
            scanf(" %c", &x);
        } while (x != 'y' && x != 't');   
    } while (x == 'y');
    printf("Total Bilangan = %d \n", a);
    printf("Rata-rata = %.2f \n", 1.0*a/i);
    printf("Maksimum = %d \n", max);
    printf("Minimum = %d \n", min);
}