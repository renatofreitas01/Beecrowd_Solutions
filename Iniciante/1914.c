/*********
Problem 1914
    De Quem é a Vez?
By Renato Freitas
**********/
#include <stdio.h>

int main() {

    int n;
    int i;
    int n1, n2, sum;
    char str1[50], esc1[10], str2[50], esc2[10];

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%s %s %s %s", str1, esc1, str2, esc2);
        scanf("%d %d", &n1, &n2);
        sum = n1 + n2;

        if (esc1[0] == 'P') {
            if (sum % 2 == 0) {
                printf("%s\n", str1);
            } else {
                printf("%s\n", str2);
            }
        } else {
            if (sum % 2 == 0) {
                printf("%s\n", str2);
            } else {
                printf("%s\n", str1);
            }
        }

    }

    return 0;
}