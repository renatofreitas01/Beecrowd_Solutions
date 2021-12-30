/*********
Problem 1187
    Área Superior
By Renato Freitas
**********/
#include <stdio.h>

int main() {
    double s = 0.0, M[12][12];
    char T[2];
    int i, j, k, cont = 0;

    scanf("%s", &T);

    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12; j++) {
            scanf("%lf", &M[i][j]);

            if (i + j < 11 && j > i) {
                s += M[i][j];
                cont++;
            }
        }
    }
    if (T[0] == 'S') {
        printf("%.1lf\n", s);
    } else if (T[0] == 'M') {
        s = s / cont;
        printf("%.1lf\n", s);
    }
    return 0;
}