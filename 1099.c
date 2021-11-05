/*********
Problem 1099
    Soma de Ímpares Consecutivos II
By Renato Freitas
**********/
#include <stdio.h>

int main() {

    int a, i, aux, j;

    scanf("%d", &a);

    int b[a], c[a], impares[a];

    for (i = 0; i < a; i++) {
        scanf("%d %d", &b[i], &c[i]);
    }

    for (i = 0; i < a; i++) {
        if (b[i] > c[i]) {
            aux = b[i];
            b[i] = c[i];
            c[i] = aux;
        }
    }

    for (i = 0; i < a; i++) {
        impares[i] = 0;
        if (b[i] % 2 == 0) {
            for (j = b[i]; j < c[i]; j++) {
                if (j % 2 != 0) {
                    impares[i] = impares[i] + j;
                } else {

                }

            }
        } else{
            for (j = b[i]+1; j < c[i]; j++) {
                if (j % 2 != 0) {
                    impares[i] = impares[i] + j;
                } else {

                }

            }
        }
    }

    for (i = 0; i < a; i++) {
        printf("%d\n", impares[i]);
    }

    return 0;
}