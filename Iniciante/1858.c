/*********
Problem 1858
    A Resposta de Theon
By Renato Freitas
**********/
#include <stdio.h>

int main() {

    int n;
    int i, j, num = 1;

    scanf("%d", &n);

    int t[n];
    for (i = 1; i <= n; i++) {
        scanf("%d", &t[i]);
        if (t[i] < t[num]) {
            num = i;
        }

    }

    printf("%d\n", num);

    return 0;
}