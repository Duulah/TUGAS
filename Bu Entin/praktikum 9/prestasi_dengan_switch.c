#include <stdio.h>

int translate(char n){
    switch (n)
    {
    case 'A':
        return 4;
    case 'B':
        return 3;
    case 'C':
        return 2;
    case 'D':
        return 1;
    default:
        return 0;
    }
}

int main(){
    char n; 
    int h = 0, a=0;
    float b = 0;
    for (int i = 1; i <= 5; i++){
         printf("Masukkan jam mapel %d:", i);
        scanf("%d", &h);
        printf("Masukkan nilai mapel %d:", i);
        scanf(" %c", &n);
        a += translate(n) * h;
        b += h;
    }
    printf("Indeks Prestasi: %f", a/b);

}