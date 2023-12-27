#include <stdio.h>

int main() {

/**
    int *primeiroPonteiro = NULL;

    printf("> %d\n", primeiroPonteiro); //Saída no tipo inteiro
    printf("> %p", primeiroPonteiro); //Saída no tipo ponteiro
*/

    int a = 10;

    int *p1 = &a; //Armazena o endereço de memória da variável a

    //Imprime o local na memória da variável 'a' em hexadecimal
    printf("p1 > %p (Referencia de memoria da variavel 'a' em hexadecimal)\n", p1);
    //Imprime o local na memória da variável 'a' em hexadecimal 
    printf("p1 > %d (Referencia de memoria da variavel 'a' em decimal)\n", p1);
    
    printf("\n");

    //Valor armazenado na referencia de memória que 'p1' armazena, ou seja, a referência de 'a'
    printf("*p1 > %d (Valor armazenado na referencia de memoria que 'p1' armazena, ou seja, valor armazenado em 'a')", *p1); 

    return 0;
}