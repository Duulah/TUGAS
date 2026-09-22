#include <stdio.h>

int main(){
    int n;
    printf("Masukkan nilai n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        if(i < 10){
            for (int j = i; j <= n/2; j++){
                printf(" ");
            }
        } else {
            for (int j = 0; j < n - i; j++){
                printf(" ");
            }  
        }
        
        for (int j = 1; j <= i ; j++){
            if(i%2!=0 && j == 1 && i < 10) printf("%d", i);
            printf("%d", i);
        }
        printf("\n");
    }
} 