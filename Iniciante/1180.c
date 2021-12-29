/*********
Problem 1180
    Menor e Posição
By Renato Freitas
**********/
#include <stdio.h>

int main() {

    int n, i, j;
    scanf("%d", &n);

    int aux, x[n], y[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &x[i]);
        y[i] = x[i];
    }

    for (j = 0; j < n; j++) {
        for (i = 0; i < n - 1; i++) {
            if (y[i] > y[i + 1]) {
                aux = y[i];
                y[i] = y[i + 1];
                y[i + 1] = y[i];
            }
        }
    }
    printf("Menor valor: %d\n", y[0]);

    for (i = 0; i < n; i++) {
        if(y[0] == x[i]){
            printf("Posicao: %d\n", i);
            return 0;
        }
    }
}