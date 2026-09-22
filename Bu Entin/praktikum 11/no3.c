#include <stdio.h>

int main(){
    int n;
    printf("Masukkan nilai n: ");
    scanf("%d", &n);
    for (int i = 1; i < n; i += 2)
    {
        if(i >= 100) break;
        if(i % 7 == 0) continue;
        if(i % 11 == 0) continue;
        printf("%d ", i);
    }
    
}
