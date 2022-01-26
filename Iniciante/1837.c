/*********
Problem 1837
    Prefácio
By Renato Freitas
**********/
#include <stdio.h>

int main() {
    int a, b, q, r;

    scanf("%d %d", &a, &b);

    if (a >= 0) {
        q = a / b;
        r = a % b;
    } else {
        int e = b;
        if (b < 0) {
            e = b * -1;
        }
        for (r = 0; r < e; r++) {
            if ((a - r) % b == 0) {
                break;
            }
        }
        q = (a-r) / b;
    }

    printf("%d %d\n", q, r);
    return 0;
}