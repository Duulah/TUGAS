#include <stdio.h>

void p(int a){
    if(a <= 1){
        printf("bukan prima");
        return;
    }
    for (int i = 2; i*i < a; i++){
        if(a % i == 0){
            printf("bukan prima");
            return;
        } 
    }
    printf("bil prima");
}

int main(){
    int a;
    scanf("%d", &a);
    p(a);

}