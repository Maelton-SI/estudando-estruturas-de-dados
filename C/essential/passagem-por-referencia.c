#include <stdio.h>

int soma_e_subtracao (int x, int y, int *cont)
{
    if (*cont>0)
    {
        *cont -= 1;
        return x + y;
    }
    
    return 0;
}

void main()
{
    int contador = 3;
    int a = 10;
    int b = 20;
    int c = 0;

    c += soma_e_subtracao(a, b, &contador);
    c += soma_e_subtracao(a, b, &contador);
    c += soma_e_subtracao(a, b, &contador);
    c += soma_e_subtracao(a, b, &contador);
    c += soma_e_subtracao(a, b, &contador);

    printf("%d", c);
}