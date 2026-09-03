#include <stdio.h>


int main(){
    int p [7] = {100000, 50000, 20000, 10000, 5000, 2000, 1000};
    int a;
    
    printf("Masukkan jumlah uang: ");
    scanf("%d", &a);

    for(int i = 0; i < 7; i++){
            printf("%d lembar uang %d \n", a/p[i], p[i]);
            a = (a % p[i]);
}
}