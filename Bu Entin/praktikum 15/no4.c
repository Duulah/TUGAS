#include <stdio.h>
#include <math.h>

const float PI = 3.14159f;

float radian(int n);

int main(){
    int r, ab;
    printf("Masukkan besar sudut BAC = ");
    scanf("%d", &r);
    printf("Masukkan panjang AB = ");
    scanf("%d", &ab);
    printf("Panjang sisi BC = %.3f", trigonometri(&r, &ab));
}

int plus (int *x, int *y){
    *x += 2;
    *y += 2;
}

float radian(int n) {
    return n/180.0f * PI;
}