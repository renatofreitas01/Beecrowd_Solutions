/*********
Problem 1173
    Preenchimento de Vetor I
By Renato Freitas
**********/
#include <stdio.h>

int main() {

    int x, i;

    scanf("%d", &x);
    printf("N[0] = %d\n", x);
    for (i = 1; i < 10; i++) {
        x = x*2;
        printf("N[%d] = %d\n", i, x);
    }
    return 0;
}