#include <stdio.h>


int main(){
    int a;
    scanf("%d", &a);
    printf("Biaya untuk %d tiket = Rp %d", a, (a%3 * 50000) + (a/3)*100000);
}
