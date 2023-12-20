#include <stdio.h>
#include <stdbool.h>

int main() {
    
    int x;
    printf("int x;\n");
    printf("sizeof(x) = %ld bytes\n\n", sizeof(x));
    
    printf("sizeof(short) = %ld bytes\n", sizeof(short));
    printf("sizeof(int) = %ld bytes\n", sizeof(int));
    printf("sizeof(long) = %ld bytes\n", sizeof(long));
    printf("sizeof(float) = %ld bytes\n", sizeof(float));
    printf("sizeof(double) = %ld bytes\n", sizeof(double));
    printf("sizeof(char) = %ld bytes\n", sizeof(char));
    printf("sizeof(bool) = %ld bytes\n", sizeof(bool));
    printf("sizeof(void) = %ld bytes\n\n", sizeof(void));

    printf("sizeof(void *) = %ld bytes\n", sizeof(void *));
    printf("sizeof(int *) = %ld bytes\n", sizeof(int *));
    printf("sizeof(int **) = %ld bytes\n", sizeof(int **));
    printf("sizeof(int ***) = %ld bytes\n", sizeof(int ***));
    printf("sizeof(float *) = %ld bytes\n", sizeof(float *));

    return 0;
}