#include <stdio.h>

int main() {
int a;
scanf("%d", &a);

printf("%d", ((a/3)*100000) + (a%3)*50000);

}