#include <stdio.h>

int main() {

    int a = 10;
    int b, c;

    printf("&a: %p Valor de 'a': %d\n", &a, a);
    printf("&b: %p Valor de 'b': %d\n", &b, b);
    printf("&c: %p Valor de 'c': %d\n", &c, c);
    printf("\n");

    b = 20;

    printf("&a: %p Valor de 'a': %d\n", &a, a);
    printf("&b: %p Valor de 'b': %d\n", &b, b);
    printf("&c: %p Valor de 'c': %d\n", &c, c);
    printf("\n");

    if (c!=0) {
        printf("c eh diferente de 0");
    } else {
        printf("c eh igual a 0");
    }

    return 0;
}