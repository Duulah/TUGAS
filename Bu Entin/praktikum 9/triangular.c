#include <stdio.h>


int main(){
    int n, a = 0;
    scanf("%d", &n);
    for (int i = n; i >= 1; i--){
        if(i>1) printf("%d + ", i);
        a += i;
    }
    printf("1 = %d", a);
}