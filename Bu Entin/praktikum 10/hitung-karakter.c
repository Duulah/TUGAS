#include <stdio.h>

int main(){
    char a = 'a';
    int m =0, n = 0;
    while (a != '\n')
    {
        scanf("%c", &a);
        if (a == ' ') n++;
        else m++;
    }
    printf("Jumlah karakter = %d\nJumlah spasi = %d", m - 1, n);
    
}