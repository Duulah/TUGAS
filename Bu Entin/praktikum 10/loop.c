#include <stdio.h>

int main(){
    int n, a=0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        a += i;
        printf("%d ", a);
    }
    
}