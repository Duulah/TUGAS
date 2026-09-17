#include <stdio.h>


int main(){
    int a;
    scanf("%d", &a);
    if(a > 100) printf("benda berbentuk gas");
    else if(a < 0) printf("benda berbentuk padat");
    else printf("benda berbentuk cair");
}
