/*********
Problem 1174
    Seleçao em Vetor I
By Renato Freitas
**********/
#include <stdio.h>

int main() {

    int i;
    float a[100];

    for (i = 0; i < 100; i++) {
        scanf("%f", &a[i]);
    }
    for (i = 0; i < 100; i++) {
        if (a[i] <= 10) {
            printf("A[%d] = %.1f\n", i, a[i]);
        }
    }
    return 0;
}