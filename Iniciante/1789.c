/*********
Problem 1789
    A Corrida de Lesmas
By Renato Freitas
**********/
#include <stdio.h>

int main() {

    int l, vi;
    int i;

    while (scanf("%d", &l) != EOF) {
        int aux = 0;
        for (i = 0; i < l; i++) {
            scanf("%d", &vi);
            if (vi > aux) {
                aux = vi;
            }
        }
        if (aux < 10) {
            printf("1\n");
        } else if (aux >= 10 && aux < 20) {
            printf("2\n");
        } else {
            printf("3\n");
        }
    }
    return 0;
}
