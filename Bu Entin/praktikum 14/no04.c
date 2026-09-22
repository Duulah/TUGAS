#include <stdio.h>

float radian(int n) {
    return n/180.0f;
}

int main(){
    int n;
    printf("derajat = ");
    scanf("%d", &n);
    printf("derajat dalam radian = %.1f", radian(n));
}