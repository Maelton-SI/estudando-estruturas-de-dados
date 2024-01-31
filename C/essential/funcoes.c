#include <stdio.h>

int increases(int x) {
    x += 1; 
    return x;
}

int main() {

    int a = 10;
    printf("a> %d\n\n", a);

    int b = increases(a);
    printf("b> %d\n", b);

    printf("a> %d\n\n", a);

    return 0;
}

