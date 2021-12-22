/*********
Problem 1145
    Sequência Lógica 2
By Renato Freitas
**********/
#include <stdio.h>

int main() {

    int a, b, i, j=0;

    scanf("%d %d", &a, &b);

    if (a > 1 && a < 20 && b > a && b < 100000) {

        for (i = 1; i <= b; i++) {
            j++;
            if(j < a){
                printf("%d ", i);
            } else{
                printf("%d\n", i);
                j = 0;
            }

        }
    }
}