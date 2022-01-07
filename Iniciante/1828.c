/*********
Problem 1828
    Bazinga!
By Renato Freitas
**********/
#include <stdio.h>
#include <string.h>

int main() {
    int T;
    int b, c;
    char ts[] = "tesoura", pp[] = "papel", pd[] = "pedra", lg[] = "lagarto", so[] = "Spock";
    char str1[10], str2[10];
    scanf("%d", &T);
    for (b = 1; b <= T; b++) {
        scanf("%s %s", str1, str2);
        if (0 == strcmp(str1, str2))
            printf("Caso #%d: De novo!\n", b);
        else if (0 == strcmp(str1, ts)) {
            if ((0 == strcmp(str2, pp)) || (0 == strcmp(str2, lg)))
                printf("Caso #%d: Bazinga!\n", b);
            else if ((0 == strcmp(str2, pd)) || (0 == strcmp(str2, so)))
                printf("Caso #%d: Raj trapaceou!\n", b);
        } else if (0 == strcmp(str1, pp)) {
            if ((0 == strcmp(str2, pd)) || (0 == strcmp(str2, so)))
                printf("Caso #%d: Bazinga!\n", b);
            else if ((0 == strcmp(str2, ts)) || (0 == strcmp(str2, lg)))
                printf("Caso #%d: Raj trapaceou!\n", b);
        } else if (0 == strcmp(str1, pd)) {
            if ((0 == strcmp(str2, ts)) || (0 == strcmp(str2, lg)))
                printf("Caso #%d: Bazinga!\n", b);
            else if ((0 == strcmp(str2, pp)) || (0 == strcmp(str2, so)))
                printf("Caso #%d: Raj trapaceou!\n", b);
        } else if (0 == strcmp(str1, lg)) {
            if ((0 == strcmp(str2, pp)) || (0 == strcmp(str2, so)))
                printf("Caso #%d: Bazinga!\n", b);
            else if ((0 == strcmp(str2, pd)) || (0 == strcmp(str2, ts)))
                printf("Caso #%d: Raj trapaceou!\n", b);
        } else if (0 == strcmp(str1, so)) {
            if ((0 == strcmp(str2, ts)) || (0 == strcmp(str2, pd)))
                printf("Caso #%d: Bazinga!\n", b);
            else if ((0 == strcmp(str2, pp)) || (0 == strcmp(str2, lg)))
                printf("Caso #%d: Raj trapaceou!\n", b);
        }
    }
    return 0;
}