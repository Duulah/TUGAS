#include <stdio.h>


int main(){
    int a, x, y;
    
    do {
        printf("Menu : 1. Menghitung volume kubus\n");
        printf("       2. Menghitung luas lingkaran\n");
        printf("       3. Menghitung volume silinder\n");
        printf("Pilih operasi yang diinginkan: ");
        scanf("%d", &a);
        switch (a){
        case 1:
            printf("\n\nMenghitung Volume Kubus\n");
            printf("Masukkan panjang sisi/rusuk kubus: ");
            scanf("%d", &x);
            printf("Volume kubus = %d", x*x*x);
            break;
        case 2:
            printf("\n\nMenghitung Luas Lingkaran\n");
            printf("Masukkan panjang jari-jari lingkaran: ");
            scanf("%d", &x);
            printf("Volume kubus = %f", x*3.14);
            break;
        case 3:
            printf("\n\nMenghitung Luas Silinder\n");
            printf("Masukkan panjang jari-jari alas: ");
            scanf("%d", &x);
            printf("Masukkan tinggi silinder: ");
            scanf("%d", &y);
            printf("Volume kubus = %f", x*3.14*y);
            break;
        default:
            printf("\n\n\n\n\n\nInput yang anda masukkan harus 1/2/3 saja!!!\n");
            break;
        }
    } while (a != 1 && a != 2 && a != 3); 
    
    
}


