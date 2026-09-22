#include <stdio.h>

long long permutasi(long long x, long long y);
long long kombinasi(long long x, long long y);
long long faktorial(int x);
int cek_var(int x, int y);

int main(){
    int x, y;
    do{
        printf("n = ");
        scanf("%d", &x);
        printf("r = ");
        scanf("%d", &y);
    } while(cek_var(x, y));
    printf("Permutasi = %lld\n", permutasi(x, y));
    printf("Kombinasi = %lld\n", kombinasi(x, y));
}

long long permutasi(long long x, long long y){
    return faktorial(x) / faktorial(x-y);
}
long long kombinasi(long long x, long long y){
    return faktorial(x) / (faktorial(y)*faktorial(x-y));
}
long long faktorial(int x){
    long long a = 1;
    for(int i = x; i > 0; i--){
        a *= i;
    }
    return a;
}
int cek_var(int x, int y){
    int a = 0;
    if(x < 0 || y < 0){
        printf("\nERROR!!!! Permutasi dan Kombinasi hanya untuk bilangan bulat positif!!!!\n\n");
        a = 1;
    }
    if(x < y){
            printf("\nERROR!!!! Nilai r tidak boleh lebih besar dari n!!!!\n\n");
            a = 1;
    }
    return a;
}