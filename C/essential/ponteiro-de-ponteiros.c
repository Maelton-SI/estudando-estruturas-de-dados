#include <stdio.h>

int main() {

    int a = 10;

    int *p1 = &a;
    
    int **p2 = &p1; //p2 eh um ponteiro de ponteiros

    printf("&a: %p\n", &a);
    printf("&p1> %p\n", &p1);
    printf("&p2> %p\n\n", &p2);

    printf("p1> %p\n", p1);
    printf("p2> %p\n\n", p2);

    //======================================================================

    printf("p2> %p = (&p1) \n\n");

    printf("*p2 eh igual *(&p1) pois p2 eh igual a &p1 => (*p2: %p = *&p1 = &a)\n ", *p2); 
    printf("Logo *p2 = valor de p1 pois *(&p1) eh igual ao valor de p1 => (p1: %p)\n ", p1);
    printf("Logo *p2 = &a pois o valor de p1 eh igual a &a => (&a: %p)", &a);

    //======================================================================

    printf("\n\n a> %d (**p2) => *(*&p1) = *(&a) = valor de a = 10", **p2);

    return 0;
}