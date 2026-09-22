#include <stdio.h>

int main(){
    char x = 'y';
    do{
        int n;
        printf("Masukkan nilai n: ");
        scanf("%d", &n);
        for (int i = 1; i <= n; i++){
            for (int j = 1; j <= i; j++){
                printf("%d ", i);
            }
            printf("\n");
        }
        do {
            if(x != 'y' && x != 't') printf("\n\n\n\nError, masukkan yang anda berikan tidak valid\n");
            printf("Mau masukkan data lagi [y/t]? ");
            scanf(" %c", &x);
        } while (x != 'y' && x != 't');   
    } while (x == 'y');
}