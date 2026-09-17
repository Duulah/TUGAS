#include <stdio.h>

int main(){
    int a = 0, i = 0;
    char x = 'y';
    do
    {
        int x;
        i++;        
        printf("Masukkan bilangan ke %d: ", i);
        scanf("%d", &a);
        a += x;
        do {
            if(x != 'y' && x != 't') printf("\n\n\n\nError, masukkan yang anda berikan tidak valid\n");
            printf("Mau masukkan data lagi [y/t]? ");
            scanf(" %c", &x);
        } while (x != 'y' && x != 't');   
    } while (x == 'y');
    printf("Total Bilangan %d", a);
}