/*********
Problem 1534
    Matriz 123
By Renato Freitas
**********/
#include <stdio.h>

int main() {
    int N, i, j;
    int cont;

    while (scanf("%d", &N) != EOF) {
        for (i = 0, cont = 0; i < N; i++) {
            for (j = 0; j < N; j++) {
                if (j == N - cont - 1) {
                    printf("2");
                } else if (j == cont) {
                    printf("1");
                } else {
                    printf("3");
                }
            }
            printf("\n");
            cont++;
        }
    }

    return 0;
}
