/*********
Problem 1435
    Matriz Quadrada I
By Renato Freitas
**********/
#include <stdio.h>

int main() {
    int n;
    int a, b, c, g, h, i, j, p, q, r;
    while (1) {
        scanf("%d", &n);
        int m[n][n];
        if (n == 0) {
            break;
        } else {
            j = 1, p = 0, q = 0, i = n;
            if (n % 2 == 0) {
                r = n / 2;
            } else if (n % 2 == 1) {
                r = (n / 2) + 1;
            }
            for (c = 1; c <= r; c++) {
                for (a = p; a < i; a++) {
                    for (b = q; b < i; b++) {
                        m[a][b] = j;
                    }
                }
                j++, p++, q++, i--;
            }
            for (g = 0; g < n; g++) {
                for (h = 0; h < n; h++) {
                    if (h == 0) {
                        printf("%3d", m[g][h]);
                    } else {
                        printf(" %3d", m[g][h]);
                    }
                }
                printf("\n");
            }
            printf("\n");
        }
    }
    return 0;
}