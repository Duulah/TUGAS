#include <stdio.h>


int main(){
    int n, a = 1;
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        printf("%d ", a);
        a += 2;
    }
}