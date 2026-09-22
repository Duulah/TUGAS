#include <stdio.h>

long int faktorial(int n) {
    int a = 1;
    for(int i = n; i > 0; i--){
        a *= i;
    }
    return a;
}

int main(){
    int n;
    printf("n = ");
    scanf("%d", &n);
    printf("Hasil faktorialnya = %d", faktorial(n));
}