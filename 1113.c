#include <stdio.h>

int main() {

    int m[100], n[100], i, cont, aux[100];

    cont = -1;
    do {
        cont++;
        scanf("%d %d", &m[cont], &n[cont]);
    } while (m[cont] != n[cont]);

    for (i = 0; i < cont; i++) {
        aux[i] = 0;
        if (m[i] < n[i]) {
           aux[i]++;
        }
    }

    for (i = 0; i < cont; i++) {
        if(aux[i] != 0){
            printf("Crescente\n");
        } else{
            printf("Decrescente\n");
        }

    }


    return 0;
}