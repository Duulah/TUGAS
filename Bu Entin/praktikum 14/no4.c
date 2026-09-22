#include <stdio.h>
const float PI = 3.14159f;

float radian(int n) {
    return n/180.0f * PI;
}

int main(){
    int n;
    printf("derajat = ");
    scanf("%d", &n);
    printf("derajat dalam radian = %.1f", radian(n));
}