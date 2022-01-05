/*********
Problem 1557
    Matriz Quadrada III
By Renato Freitas
**********/
#include <stdio.h>
#include <math.h>

int main() {
    int n;
    int i, j, verif;

    do {
        int cont = 1, aux = 1, k = 1;
        scanf("%d", &n);
        if (n == 0) break;

        verif = pow(2, n*2 - 2);
        while (verif > 9) {
            verif = verif/10;
            k++;
        }

        for (i = 0; i < n; i++) {
            aux = cont;
            for (j = 0; j < n; ++j) {
                if (j == n - 1) {
                    printf("%*d\n",k ,cont);
                } else {
                    printf("%*d ",k , cont);
                }
                cont = cont * 2;
            }
            cont = aux * 2;
        }
        printf("\n");

    } while (n != 0);

    return 0;
}