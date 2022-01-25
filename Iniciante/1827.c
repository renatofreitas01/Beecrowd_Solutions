1827 - Matriz Quadrada IV
#include <stdio.h>

int main() {
    int n;
    int i, j;

    while (scanf("%d", &n) != EOF) {
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                if (i == (n) / 2 && j == (n) / 2) {
                    printf("4");
                } else if (i >= n / 3 && j >= n / 3 && i <= (2 * n-1) / 3 && j <= (2 * n-1) / 3) {
                    printf("1");
                } else if (i + j == n - 1) {
                    printf("3");
                } else if (i == j) {
                    printf("2");
                } else {
                    printf("0");
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}