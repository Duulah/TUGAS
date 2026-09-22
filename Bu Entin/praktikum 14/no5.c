#include <stdio.h>

float konversi(float x, char a, char z) {
    switch (a){
    case 'C':
        switch (z){
            case 'F':
                return 9*x/5 + 32;
            case 'R':
                return 4*x/5;
            case 'C':
                return x;
        }
        break;

    case 'F':
        switch (z){
            case 'C':
                return 5*(x - 32)/9;
            case 'R':
                return 4*(x - 32)/9;
            case 'F':
                return x;
        }

    case 'R':
        switch (z){
            case 'C':
                return 5*x/4;
            case 'F':
                return 9*x/4 + 32;
            case 'R':
                return x;
        }
    }
}

int cek_var(char a, char z){
    int c = 0;
    if((a != 'C' && a != 'F' && a != 'R')){
        printf("ERROR!!!! :Format satuan asal yang anda masukkan salah, pastikan hanya menginputkan 'C', 'F', atau 'R' (dalam kalpital)\n\n");
        c = 1;
    }
    if((z != 'C' && z != 'F' && z != 'R')){
        printf("ERROR!!!! :Format satuan tujuan yang anda masukkan salah, pastikan hanya menginputkan 'C', 'F', atau 'R' (dalam kalpital)\n\n");
        c = 1;
    }
    return c;
}

int main(){
    float x;
    char a, z;
    do{
    printf("Masukkan suhu sumber = ");
    scanf("%f", &x);
    printf("Masukkan satuan asal = ");
    scanf(" %c", &a);
    printf("Masukkan satuan tujuan = ");
    scanf(" %c", &z);
    } while(cek_var(a,z));
    printf("Hasil konversi suhu= %.2f", konversi(x, a, z));
}