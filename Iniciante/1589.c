/*********
Problem 1589
    Bob Conduite
By Renato Freitas
**********/
#include <stdio.h>

int main() {

    int t, r1, r2;
    int i;

    scanf("%d", &t);
    for (i = 0; i < t; i++) {
        scanf("%d %d", &r1, &r2);
        printf("%d\n", r1 + r2);
    }
    
    return 0;
}
