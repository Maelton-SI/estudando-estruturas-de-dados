/**
 * 1) Escreva os valores das variáveis para cada instrução do programa abaixo. Qual a saída do programa?
 * 
*/

#include <stdio.h>

int main(int argc, char *argv[]) {

    int a, b, *p1, *p2;

    a = 4;
    b = 3;
    p1 = &a;
    p2 = p1;
    *p2 = *p1 + 3; b = b * (*p1); (*p2)++;
    p1 = &b;

    printf("%d %d\n", *p1, *p2);
    printf("%d %d\n", a, b);

    return 0;
}