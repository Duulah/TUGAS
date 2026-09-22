#include <stdio.h>

int main(){
    int n;
    printf("Masukkan nilai n: ");
    scanf("%d", &n);
    for (int i = 1; i < n; i += 2)
    {
        if(i % 3 == 0) continue;
        printf("%d ", i);
    }
    
}