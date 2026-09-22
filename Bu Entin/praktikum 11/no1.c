#include <stdio.h>

int main(){
    char a;
    printf("Ketik Sesuatu: ");
    while (1)
    {
        scanf("%c", &a);
        if(a == '\n') break;
        printf("%c", a);
    }
}