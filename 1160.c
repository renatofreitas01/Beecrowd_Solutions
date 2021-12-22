/*********
Problem 1160
    Crescimento Populacional
By Renato Freitas
**********/
#include <stdio.h>

int main() {

    int t, pa, pb, cont = 0, i;
    double g1, g2;

    scanf("%d", &t);
    for (i = 0; i < t; i++) {
        scanf("%d %d %lf %lf", &pa, &pb, &g1, &g2);
        while (pa <= pb && cont < 101) {
            pa += (int) ((pa * g1) / 100);
            pb += (int) ((pb * g2) / 100);
            cont++;
        }
        if (cont <= 100) {
            printf("%d anos.\n", cont);
        } else {
            printf("Mais de 1 seculo.\n");
        }
        cont = 0;
    }
    return 0;
}